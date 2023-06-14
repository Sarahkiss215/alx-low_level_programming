#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


void scan_elf(unsigned char *e_ident);
void get_magic(unsigned char *e_ident);
void get_class(unsigned char *e_ident);
void get_data(unsigned char *e_ident);
void get_version(unsigned char *e_ident);
void get_abi(unsigned char *e_ident);
void get_osabi(unsigned char *e_ident);
void get_type(unsigned int e_type, unsigned char *e_ident);
void get_entry(unsigned long int e_entry, unsigned char *e_ident);
void exit_elffile(int elffile);

/**
 * get_magic - prints the magic numbers
 * @e_ident: array with ELF magic values
 * Return: Nothing
 */
void get_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i != EI_NIDENT - 1)
			printf(" ");
		else
			printf("\n");
	}
}
/**
 * scan_elf - checks whether a file is ELF file
 * @e_ident: array with name of ELF file
 * Return: Nothing
 */
void scan_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i <= 3; i++)
	{
		if (e_ident[i] != 127 &&
		e_ident[i] != 'E' &&
		e_ident[i] != 'L' &&
		e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Non - ELF file");
			exit(98);
		}
	}
}
/**
 * get_class - prints the class of the ELF file
 * @e_ident: array with ELF's classes
 * Return: Nothing
 */
void get_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("INVALID\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_data - prints the data of ELF file
 * @e_ident: array of ELF's data
 *
 * Return: Nothing
 */
void get_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Invalid\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * get_version - prints the version of the ELF file
 * @e_ident: array of ELF's version
 * Return: Nothing
 */
void get_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_NONE:
			printf("%d (Invalid)\n", EV_NONE);
			break;
		case EV_CURRENT:
			printf("%d (current)\n", EV_CURRENT);
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * get_osabi - Prints the OS/ABI of an ELF file
 * @e_ident: array of ELF's OS/ABI
 * Return: Nothing
 */
void get_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * get_abi - gets the ABI version of an ELF file
 * @e_ident: array of ELF's ABI version
 * Return: Nothing
 */
void get_abi(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}
/**
 * get_type - gets the type of an ELF file
 * @e_type: type of ELF file
 * @e_ident: array of ELF's class
 * Return: Nothing
 */
void get_type(unsigned int e_type, unsigned char *e_ident)
{
	 printf("  Type:                              ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;


	switch (e_type)
	{
		case ET_NONE:
			printf("INVALID (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * get_entry -  gets the entry point
 * @e_entry: address of entry point
 * @e_ident: array of ELF's entry points
 * Return: Nothing
 */
void get_entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * exit_elffile - closes the ELF file
 * @elffile: file descriptor
 * Return: Nothing
 */
void exit_elffile(int elffile)
{
	if (close(elffile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elffile);
		exit(98);
	}
}
/**
 * main - displays the information contained in the ELF header
 * at the start of an ELF file
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: EXIT_SUCCESS on success, otherwise 98 on error
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int op, wr;
	Elf64_Ehdr *headerf;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read %s\n", argv[1]);
		exit(98);
	}
	headerf = malloc(sizeof(Elf64_Ehdr));
	if (headerf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't read %s\n", argv[1]);
		exit_elffile(op);
		exit(98);
	}
	wr = read(op, headerf, sizeof(Elf64_Ehdr));
	if (wr == -1)
	{
		free(headerf);
		dprintf(STDERR_FILENO, "Error: no such file %s\n", argv[1]);
		exit_elffile(op);
		exit(98);
	}
	printf("ELF header file\n");
	get_magic(headerf->e_ident);
	get_class(headerf->e_ident);
	get_data(headerf->e_ident);
	get_version(headerf->e_ident);
	get_osabi(headerf->e_ident);
	get_abi(headerf->e_ident);
	get_type(headerf->e_type, headerf->e_ident);
	get_entryp(headerf->e_entry, headerf->e_ident);

	free(headerf);
	exit_elffile(op);
	return(0);
}
