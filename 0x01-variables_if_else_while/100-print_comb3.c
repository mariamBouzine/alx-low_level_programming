#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x;

	i = 48;
	x = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (x != i && x < i)
			{
				putchar(x);
				putchar(i);
				if (i == 57 && x == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
