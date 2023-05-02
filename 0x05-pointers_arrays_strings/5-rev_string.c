#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reverses
 *
 */

void rev_string(char *s)
{       
        int letters, length;
        char temp;
        
        letters = 0;
        length = 0;
        while (s[letters++])
                length++;
        
        for (letters = length -1; letters >= length / 2; letters--)
        {       
                temp = s[letters];
                s[letters] = s[length - letters - 1];
		s[length -letters - 1] = temp;
	}
}
