#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
  *main: this is the main entry point for our program
  *argument: thid program taked no argument
  *return: this program returns a zero by defaulr
*/
int main(void)

{

	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n%10);
	if (n%10 > 5)
		printf("and is greater than 5\n");
	else if (n%10 == 0)
		printf("and is 0\n");
	else if (n%10 <6 && n%10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);

}