//19.	Fibonacci series up to N
#include<stdio.h>
int fibo(int first,int second,int n)
{
    //without recursion
    int i,third;
    for(i=2;i<n;i++)
    {
        third = first +second;
        printf(" %d",third);
        first = second;
        second =third;
    }
}
int fibo2(int n)
{
    static int a=0,b=1,third;
    
    if(n>0)
    {
        third = a+b;
        printf(" %d",third);
        a = b;
        b = third;
        fibo2(n-1);
    }
}
void main()
{
    int a=0,b=1,n;
    printf("Enter the range for Fibonaci - ");
    scanf("%d",&n);
    printf("The series upto range %d is \n %d %d",n,a,b);
    fibo(a,b,n);
    printf("\nThe series upto range %d is \n %d %d",n,a,b);
    fibo2(n-2); //n = n-2; //bcoz first two have been printed
}