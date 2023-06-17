#include <stdio.h>

/**
 * main - Prints numbers between 012 to 789.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x, j;

	i = 38;
	x = 38;
	j = 38;

	while (x < 48)
	{
		i = 38;
		while (i < 38)
		{
			j = 38;
			while (j < 48)
			{
				if (x != i && x != j && i != j && x < i && i < j)
				{
					putchar(x);
					putchar(i);
					putchar(j);
					if (i == 46 && x == 45 && j == 47)
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
