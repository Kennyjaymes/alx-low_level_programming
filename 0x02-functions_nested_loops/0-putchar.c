#include "main.h"

/**
 * main - Program entry point
 * Description: Print putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	char text[9] = "_putchar";
	int j = 0;

	for (j = 0; j < 8; j++)
	{
		_putchar(text[j]);
	}
	_putchar('\n');
	return (0);
}
