//18.	Factorial of a number
#include<stdio.h>
int fact_fun(int number)
{
    if(number==0)
        return 1;
    else
        return number*fact_fun(number-1);
}
void main()
{
    int num,n,fact=1;
    printf("Enter the digit - ");
    scanf("%d",&num);
    n = num;
    if (n==0)
        fact = 1;
    else
    {
        while(n != 1)
        {
            fact *= n;
            n -= 1;
        }
    }    
    printf("Factorial of digit %d is %d",num,fact);
    printf("\nFactorial from function of digit %d is %d",num,fact_fun(num));  
}