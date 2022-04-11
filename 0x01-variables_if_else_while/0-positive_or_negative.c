#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Function to determine +, -  */

/*i e Function to determine +, -  */
/**
 * main - assign a random number to the variable n each time it is executed
 * it checks whether the number is positive or negative
 * Return: 0 exit code for the program
 */
int main(void)
{
	/*i e Function to determine +, -  */

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*i e Function to determine +, -  */
	if (n > 0)
		printf("%d is positive\n", n);
	/*i e Function to determine +, -  */
	if (n < 0)
		printf("%d is negative\n", n);
	/*i e Function to determine +, -  */
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
