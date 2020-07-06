//4.	Uppercase, Lowercase or special character
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character - ");
    scanf("%c",&c);
    if(c>=97 && c<=122)
    printf("\n%c is lowercase",c);
    else if (c >=65 && c<=90)
    printf("\n%c is Upper Case",c);
    else if(c>=32 && c<=47 ||c>=58 && c<=64 || c>=91 && c<=96 || c>=123 && c<=126)
    printf("\n%c is Special Character",c);
    else if(c>=49 && c <=57)
    printf("%c is an integer i.e %d" ,c,c-48);
    else
    printf("Check the Input once");
    return 0;
}