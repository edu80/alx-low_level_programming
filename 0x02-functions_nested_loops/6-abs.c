#include "main.h"

/**
 * _abs  - computes absolutte value of an integer
 * The input number as an integer.
 * @i: input shold be an integer
 * Return: absokute value  Always (SUCCESS)
 * betty style doc for function main goes there
 */

int _abs(int i)
{
if (i >= 0)
{
return (i);
}
else
{
return (i * -1);
}
_putchar('\n');
}
