#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
* main - Determines whether a number is positive, negative or zero
*
* Returns: Always 0 (Success)
*/
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  
  /*check if n is positive negative or zero using if*/
  if(n>0)
  {
    printf("%d is positive\n",n);
  }
  else if(n==0)
  {
    printf("%d is zero\n",n);
  }
  else
  {
    printf("%d is negative\n",n);
  }
  return (0);
}
