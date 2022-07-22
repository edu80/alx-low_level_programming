#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - Program that prints the number of arguments passed into it
* @argc: - Int of arguments passed into program including command
* @argv: - Array of pointers to the strings of arguments passed
* Return: 0
*/

int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
}
return (0);
}
