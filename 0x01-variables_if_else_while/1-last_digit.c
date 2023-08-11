#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* Return should always be zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        lastn = n % 10;
        /*if else statement for finding output*/
	if (lastn > 5)
	{
		printf("Last digit of %d is greater than 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is 0\n", n, lastn);
	} else
	{
		printf("Last digit of %d is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
