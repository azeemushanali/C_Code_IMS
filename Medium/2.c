//2.Armstrong numbers between two intervals
#include<stdio.h>
void main()
{
    int l,r,i;
    printf("Enter the left extreme range for prime number - ");
    scanf("%d",&l);
    printf("Enter the right extreme range for prime number - ");
    scanf("%d",&r);
    for(i=l;i<r;i++)
    {
        check_armstrong(i);
    }
}
int check_armstrong(int number)
{
    int sum=0,temp;
    temp = number;
    while (number>0)
    {
        sum += (number%10) * (number%10) * (number%10);
        number /= 10;   
    }
    //return (sum==temp)?temp:0;
    if(sum==temp)
        printf("%d ",temp);
}