//1.	Prime numbers in a given range
#include<stdio.h>
void main()
{
    int l,r,i;
    printf("Enter the left extreme range for prime number - ");
    scanf("%d",&l);
    printf("Enter the right extreme range for prime number - ");
    scanf("%d",&r);
    for(i=l;i<r;i++)
    {
        //printf("%d",i);
        check_prime(i);
    }
}
int check_prime(int number)
{
    int i,prime=1;
    for(i = 2; i < number; i++) 
    {
      if((number % i) == 0) 
      {
        prime = 0;
      }
    }
    if (prime == 1)
        printf("%d ", number);
    return 0;
}