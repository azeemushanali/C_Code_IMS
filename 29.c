//29.	Abundant number or not

/*
A number n is said to be Abundant Number if sum of all the proper divisors of the number denoted by sum(n)
 is greater than the value of the number n.
And the difference between these two values is called the abundance.
Number 12 is abundand with abundance = 4
Number 18 is abundand with abundance = 3
Number 21 is not abundant
*/
#include<stdio.h>
void main()
{
    int num,i,sum=0;
    printf("Enter the number to check for Abundant number-  ");
    scanf("%d",&num);
    for ( i = 1; i <num; i++)
    {
        if (num%i==0)
            sum += i;
    }
    if (sum>num)
        printf("Number %d is abundand with abundance = %d",num,sum-num);
    else
        printf("Number %d is not abundant",num);
}