//2.	A character is an alphabet or not
#include<stdio.h>
int main()
{
    char c;
    printf("Enter the character");
    scanf("%c",&c);
    // To check ASCII value do this printf("%d",c);
    // ASCII Value a=97 z=122 A=65 Z=90
    if (c>=97 && c<=122 || c >=65 && c<=90)
    printf("%c is an Alpahbet",c); 
    else
    printf("%c is not an Alpahbet",c);
    

}