#include "holberton.h"
/**
* _memset - fills memory with constant byte.
* @s: array of char
* @b: array of chat
* @n: number of bytes
* Return:(s)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
int i=0;
while (i<n)
{
s[i]=b;
i++;
}
return(s);
}
