//27.	Automorphic number or not

/*
A number is called Automorphic number if and only if its square ends in the same digits as the number itself.
Input  : N = 76 
Output : Automorphic
Explanation: As 76*76 = 5776

Input  : N = 25
Output : Automorphic
As 25*25 = 625

Input : N = 7
Output : Not Automorphic
As 7*7 = 49
*/
#include<stdio.h>
void main()
{
    int num,sq,flag=0,t;
    printf("\nEnter the number to check for Automorphic number-  ");
    scanf("%d",&num);
    sq = num*num;
    t = num;
    while (num>0)
    {
        if(num%10 == sq%10)
        {
            flag = 1;
            num = num/10;
            sq = sq/10;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Number %d is not Automorphic",t);
    }
    else
    {
        printf("Number %d is Automorphic",t);
    } 
}