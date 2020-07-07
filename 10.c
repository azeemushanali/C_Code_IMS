//10.	GCD of two numbers
#include<stdio.h>
int gcd_fun(int a, int b) 
{  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
    if (a == b) 
        return a;  
    if (a > b) 
        return gcd_fun(a-b, b); 
    return gcd_fun(a, b-a); 
}
int gcd_fun2(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd_fun2(b, a % b);  
} 
int main()
{
    int a,b,gcd;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    gcd = gcd_fun(a,b);    
    printf("From first function-\nGCD(Greatest Common Divisor) of %d and %d is %d",a,b,gcd);
    printf("\nFrom second function-\nGCD(Greatest Common Divisor) of %d and %d is %d",a,b,gcd_fun2(a,b));
}