#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed
 * it checks whether the number is zero, greater than 5 and less than 6 and not equal to 0
 * Return: 0 exit code for the program
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
