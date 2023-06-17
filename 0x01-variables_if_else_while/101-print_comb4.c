#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x, j;

	i = 48;
	x = 48;
	j = 48;

	while (x < 58)
	{
		i = 48;
		while (i < 58)
		{
			j = 48;
			while (j < 58)
			{
				if (x != i && x != j && i != j && x < i && i < j)
				{
					putchar(x);
					putchar(i);
					putchar(j);
					if (i == 56 && x == 55 && j == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
