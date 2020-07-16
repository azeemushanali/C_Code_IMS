//23.	Armstrong number or not
#include<stdio.h>
void main()
{
    int num,t,sum=0;
    printf("Enter the number to check for Armstrong -  ");
    scanf("%d",&num);
    t = num;
    while(num>0)
    {
       sum += (num%10) * (num%10) * (num%10);
       num = num/10;
    }
    if (sum==t)
    {
        printf("Number %d is armstrong number",t);
    }
    else
    {
        printf("Number %d is not an armstrong Number",t);
    }    
}