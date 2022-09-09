#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main -  prints different text depending on the
 * last value of n 
 * Return 0 if exited properly
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        int last = n % 10;

	printf("Last digit of %d is %d\n", n, last);
	
	if (last == 0)
	{
		printf("and is 0\n");
	}
	else if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last < 6 && last != 0)
	{
		printf("and is less than 6 and not 0\n");
	};

	return (0);
}
