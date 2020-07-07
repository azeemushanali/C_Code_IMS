//11.	Greatest of two numbers
#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    max = (a>b)?a:b;
    printf("%d is greatest among %d and %d",max,a,b);

}