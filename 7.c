//7.	Swap two numbers without third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first variable - ");
    scanf("%d",&a);
    printf("Enter the second variable - ");
    scanf("%d",&b);
    printf("Entered value -\na = %d b = %d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\nSwapped value -\na = %d b = %d",a,b);  
    return 0;
}