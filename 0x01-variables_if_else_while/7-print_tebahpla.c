#include <stdio.h>

int main(void)
/**
 * main - main block
 * Description: Print the lowercaes alphabet in reverse
 * Return: 0
 */
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
