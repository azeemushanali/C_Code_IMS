//13.	Number of digits in an integer
#include<stdio.h>
int main()
{
    int num,digits=0;
    printf("Enter the digit - ");
    scanf("%d",&num);
    printf("Number of digits in %d is",num);
    while (1)
    {
        if(num/10!=0)
        {
            num = num/10;
            digits += 1;
        }
        else
        break;        
    }
    printf(" %d",digits+1);
    return 0;
}