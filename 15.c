//15.	Sum of N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the range for sum - ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
        sum += i;
    printf("Sum for %d natural numbers is %d",n,sum);
}