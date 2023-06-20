#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i, letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
