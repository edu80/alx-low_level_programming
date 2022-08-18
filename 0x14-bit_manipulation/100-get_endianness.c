#include <stdio.h>                                                             
#include "main.h"  

/**
* get_endianness - return the endianness of the machine
* Return: 0 for big endian, 1 for little endian
*/

int main(void)
{
int n;
n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}
