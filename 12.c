//12.	Greatest of three numbers
#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    printf("Enter third number - ");
    scanf("%d",&c);
    max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Max among the %d %d and %d is %d",a,b,c,max);
}