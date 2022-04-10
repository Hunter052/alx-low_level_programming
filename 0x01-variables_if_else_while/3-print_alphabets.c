#include <stdio.h>

/**
 * main - main block
 * Return: Always 0 (Success)
 */

int main(void)
{
        char ch;

	char cha;
	
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        putchar ('\n');

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);

	}
	putchar ('\n');
        
        return (0);

}

