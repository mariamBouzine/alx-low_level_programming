#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, x, j, y, op1, op2;

	i = x = j = y = 48;
	while (y < 58)
	{
		j = 48;
		while (j < 58)
		{
			x = 48;
			while (x < 58)
			{
				i = 48;
				while (i < 58)
				{
					op1 = (y * 10) + j;
					op2 = (x * 10) + i;
					if (op1 < op2)
					{
						putchar(y);
						putchar(j);
						putchar(' ');
						putchar(x);
						putchar(i);
						if (y == 57 && j == 56 && x == 57 && i == 57)
							break;
						putchar(',');
						putchar(' ');
					}
					i++;
				}
				x++;
			}
			j++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
