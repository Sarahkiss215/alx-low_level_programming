#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int close_err(int);
/**
 * main - Main function
 * @argc: number of arguments
 * @argv: pointers to array arguments
 * Return: 1 on success,
 * exit on error
 */
int main(int argc, char *argv[])
{
        char buffer[1024];
        int bytes_read = 0, _EOF = 1, srcfd = -1, destfd = -1, err = 0;

        if (argc != 3)
        {
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
                exit(97);
        }
        srcfd = open(argv[1], O_RDONLY);
        if (srcfd < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
        }
        destfd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
        if (destfd < 0)
		{
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                close_err(srcfd);
                exit(99);
        }
        while (_EOF)
        {
                _EOF = read(srcfd, buffer, 1024);
                if (_EOF < 0)
                {
                        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        close_err(srcfd);
                        close_err(destfd);
                        exit(98);
                }
                else if (_EOF == 0)
                        break;
                bytes_read += _EOF;
                err = write(destfd, buffer, _EOF);
                if (err < 0)
                {
                        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
                        close_err(srcfd);
                        close_err(destfd);
                        exit(99);
                }
        }
        err = close_err(destfd);
        if (err < 0)
		{
                close_err(srcfd);
                exit(100);
        }
        err = close_err(srcfd);
        if (err < 0)
                exit(100);
        return (0);
}

/**
 * close_err - A function that closes a file and prints error
 * @info: Description error for closed file
 * Return: 1 on success, -1 on error
 */
int close_err(int info)
{
        int err;

        err = close(info);
        if (err < 0)
        {
                dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", info);
        }
        return (err);
}
