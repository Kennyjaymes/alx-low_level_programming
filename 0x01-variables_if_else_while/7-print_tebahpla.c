#include <stdio.h>
/**
 * main - main block
 * Description: Print the lowercaes alphabet in reverse
 * Return: 0
 */
int main(void)
{
char c;
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (c = 'a'; c < 'g'; c++)
{
	putchar(c);
}
return (0);
}
