//22.	Palindrome or not
#include<stdio.h>
void main()
{
    int num,ones,reverse=0,num2;
    printf("Enter the digit - ");
    scanf("%d",&num);
    num2 = num;
    while(num!=0)
    {
        ones = num%10;
        reverse = reverse*10 + ones;
        num = num/10;
    }
    if(reverse==num2)
        printf("Number %d is Palindrome",num2);
    else
        printf("Number is not a Palindrome Number",num2);
    
}