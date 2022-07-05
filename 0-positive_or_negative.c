#include<stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> assign arandom to the variable n each time is executed and print  whether the number stored in the variable n is positive or negative
 * Return : always return 0 for Success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is postive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n)
return (0);
}
