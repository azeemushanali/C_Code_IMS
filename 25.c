//25.	Perfect number or not
#include<stdio.h>
void main()
{
    int n,i,sum=0;
    printf("Perfect number, a positive integer that is equal to the sum of its proper divisors. The smallest perfect number is 6, which is the sum of 1, 2, and 3. Other perfect numbers are 28, 496, and 8,128.");
    printf("\n-----------------------------------------------------------------------------------------");
    printf("\nEnter the number to check for perfect number-  ");
    scanf("%d",&n);
    for (i = 1; i<n ;i++)
    {
        if(n%i==0)
            sum += i;
    }
    if(sum==n)
        printf("The number %d is Perfect",n);
    else
        printf("The Number %d is not perfect",n);
}