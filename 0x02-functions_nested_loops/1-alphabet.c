#include "main.h"

/**
 * main - main block
 * Description: print the alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void);
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
