//30.	Power of a number
#include<stdio.h>
void main()
{
    int base,exp,res=1,i;
    printf("Enter the base number-  ");
    scanf("%d",&base);
    printf("Enter the Exponential to  number-  ");
    scanf("%d",&exp);
    for ( i = 0; i < exp; i++)
    {
        res *= base;
    }
    printf("Resultant values will be %d",res);
    
}