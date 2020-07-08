//16.	Sum of numbers in a given range
#include<stdio.h>
int main()
{
    int n1,n2,sum=0,i;
    printf("Enter the starting point- ",n1);
    scanf("%d",&n1);
    printf("Enter the Ending point - ");
    scanf("%d",&n2);
    for (i = n1; i <= n2; i++)
        sum += i;
    printf("Sum for natural numbers in range (%d,%d) is %d",n1,n2,sum);
}