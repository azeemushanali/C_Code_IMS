//5.	A number is positive or negative
#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number - ");
    scanf("%d",&n);
    if(n>0)
    printf("Positive");
    else if (n<0)
    printf("Negative");
    else if(n==0)
    printf("Number is zero");
    else
    printf("Check the input");
}