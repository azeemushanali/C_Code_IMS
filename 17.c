//17.	Reverse a given number
#include<stdio.h>
void main()
{
    int num,ones,reverse=0;
    printf("Enter the digit - ");
    scanf("%d",&num);
    printf("Reverse of digit %d is",num);
    while(num!=0)
    {
        ones = num%10;
        reverse = reverse*10 + ones;
        num = num/10;
    }
    printf(" %d",reverse);
    return 0;
}