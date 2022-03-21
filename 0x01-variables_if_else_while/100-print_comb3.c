#include <stdio.h>

/**
 * main - main block
 * Description: print possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int m, n, o;
	m = 0;
	while (m < 100)
	{
		n = m % 10; /* single digit */
		o = m / 10; /* double digit */
		if (o < n)
		{
			putchar(o + '0');
			putchar(m + '0');
			
			if (m < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		m++;
	}
	putchar('\n');
	
	return (0);
}

