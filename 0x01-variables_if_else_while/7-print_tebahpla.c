#include <stdio.h>

int main(void)
/**
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
 */
{
char ch = 'z' ;
while (ch >= 'a')
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
