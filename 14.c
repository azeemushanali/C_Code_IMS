//14.	Sum of digits of a number
#include<stdio.h>
int main()
{
    int num,sum = 0;
    printf("Enter the number - ");
    scanf("%d",&num);
    printf("Sum of digits in %d",num);
    while(num!=0)
    {
        sum += num%10;
        num = num/10;
    }
    printf(" is %d",sum);
}