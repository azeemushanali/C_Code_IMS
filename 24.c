//24.	Strong number or not
#include<stdio.h>
void main()
{
    int n,sum,t;
    printf("A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.\nFor example, 145 is a strong number.\nAs fact(1)+fact(4)+fact(5)==145\n");
    printf("Enter the number to check for strong number-  ");
    scanf("%d",&n);
    t = n;
    while(t>0)
    {
        sum += fact(t%10);
        //printf("\nfact %d num %d",fact(t%10),t%10);
        t = t/10;
    }
    //printf("\nsum = %d",sum);
    if(sum==n)
    {
        printf("Number %d is Strong Number",n);
    }
    else
    {
        printf("Number %d is not Strong Number",n);
    }
    
}
int fact(int number)
{
    int i,ans=1;
    if(number==0)
        return 1;
    else
    {
        for(i=1;i<=number;i++)
        {
            ans *= i;
        }
    }
    return ans;
}