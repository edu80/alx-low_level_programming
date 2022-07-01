#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if the input n is positve negative or zero
 *
<<<<<<< HEAD
 *  main - Determines if the input n is positve negative or zero
 *
 * Return: Always 0 (success)
 *
 *  betty style doc for function main goes there
 */

=======
 * Return: Always 0 (success)
 *
 * betty style doc for function main goes there
 */
>>>>>>> acbcc663e0f8e4d0fa9f379c9352834cca458ee5
int main(void)
{
<<<<<<< HEAD

     int n;
     srand(time(0));
       n = rand() - RAND_MAX / 2;
	/* your code goes there */

    if (n > 0)
	 {
        printf("%d is positive\n", n);
       }   
   else if (n == 0)

        {
	 printf("%d is zero\n", n);
	 }
  else if (n < 0)	
       {   
	 printf("%d is negative\n", n)						
       }

		 return (0);

 }    
=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
>>>>>>> acbcc663e0f8e4d0fa9f379c9352834cca458ee5
