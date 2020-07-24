//3.Can a number be expressed as a sum of two prime numbers?
#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number - "); //sample input = 13
    scanf("%d",&number);
    for (int i = 2; i < number; i++)
    {
        if(check_prime(i)==1)
        {
            if(check_prime(number-i)==1)
            printf("The number %d can be written as %d + %d,here %d and %d are both prime.",number,i,number-i,i,number-i);
        }
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
    return 1;
}