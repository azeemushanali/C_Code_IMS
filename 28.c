//28.	Harshad number or not

/*
If a number is divisible by the sum of its digits then it will be known as a Harshad Number. 
For example: The number 156 is divisible by the sum (12) of its digits (1, 5, 6 )*/
#include<stdio.h>
void main()
{
    int num,sum;
    printf("Enter the number to check for Harshad number-  ");
    scanf("%d",&num);
    harshad(num,sum_fun(num));
}
int sum_fun(int n)
{
    int sum;
    while (n>0)
    {
        sum += n%10;
        n = n/10;
    }
    return sum;
}
int harshad(int number,int sum)
{
    int flag;
    //printf("%d %d",number , sum);
    flag = (number%sum==0)?1:0;
    if(flag==1)
        printf("Number %d is Harshad",number);
    else
        printf("Number %d is Not Harshad",number);
    return 0;
}