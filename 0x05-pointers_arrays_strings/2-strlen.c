#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 *betty style doc for function main goes there
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
count++;
return (count);
}
