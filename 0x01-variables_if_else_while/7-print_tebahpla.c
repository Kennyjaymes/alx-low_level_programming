#include <stdio.h>

int main(void)
/**
 * main - check the code
 *
 * Return: Always 0.
 */
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
