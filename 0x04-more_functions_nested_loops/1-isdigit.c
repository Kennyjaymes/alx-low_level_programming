#include "main.h"
#include <stdio>

/**
 * _isdigit - checks for a digit.
 * @c: variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return(0);
}

}
