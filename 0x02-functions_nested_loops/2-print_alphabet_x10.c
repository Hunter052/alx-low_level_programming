#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter;

	while (times < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		times++;
	}
}
