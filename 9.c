//9.	LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,lcm,max;
    printf("Enter first number - ");
    scanf("%d",&a);
    printf("Enter second number - ");
    scanf("%d",&b);
    max = (a > b) ? a : b;
    lcm = max;
    while (1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            break;
        }
        lcm += max; //this is optimised 
        //we could also use this lcm ++ but this is not that optimised
    }
    printf("LCM of %d and %d is %d",a,b,lcm);
    return 0;
}