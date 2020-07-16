//26.	Friendly pair or not (amicable or not)
/*
Amicable numbers are two different numbers so related that the sum of the proper divisors of each is equal to the other number.
For example, 
the smallest pair of amicable numbers is (220, 284);
 for the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110, of which the sum is 284; 
 and the proper divisors of 284 are 1, 2, 4, 71 and 142, of which the sum is 220.

The first few amicable pairs are: (220, 284), (1184, 1210), (2620, 2924), (5020, 5564), (6232, 6368) 
*/
#include<stdio.h>
void main()
{
    int n1,n2,i,sum1=0,sum2=0;
    printf("To check for amicable number\nEnter the First number -  ");
    scanf("%d",&n1);
    printf("Enter the Second Number - ");
    scanf("%d",&n2);
    //printf("Num1 %d Num2 %d",n1,n2);
    for (i = 1; i<n1 ;i++)
    {
        if(n1%i==0)
            sum1 += i;
    }
    for (i = 1; i<n2 ;i++)
    {
        if(n2%i==0)
            sum2 += i;
    }
    //printf("%d %d",sum1,sum2);
    if (sum1==n2&&sum2==n1)
        printf("Numbers %d  & %d are amicable pair",n1,n2);
    else
        printf("Numbers %d  & %d are not amicable pair",n1,n2);
}