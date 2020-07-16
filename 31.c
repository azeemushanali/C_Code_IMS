//31.	Factors of a number
#include<stdio.h>
void main()
{
    int num,i;
    printf("Enter the number-  ");
    scanf("%d",&num);
    printf("Factors of %d will be - \n1 ");
    for(i = 2;i<num;i++)
    {
        if(num%i==0)
            printf(", %d ",i);
    }
    
}