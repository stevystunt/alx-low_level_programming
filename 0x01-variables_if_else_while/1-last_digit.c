#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n; l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
	printf("the last digit of %d is %d and is greater than 5/n", n, l_digit);
	else if (l_digit == 0)
		printf("the last digit of %d is %d and if equal to zer\n", n, l_digits);
	else if (l_digit <6)
		printf("the last digit of %d is %d and is less that six not zero\n", n, l
_digit);				
	return (0);
}

