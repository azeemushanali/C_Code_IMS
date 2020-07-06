/*1.	A character is a vowel or consonant*/
#include<stdio.h>
void main()
{
    int flag;
    char c,vowel[5] = {'a','e','i','o','u'};
    printf("Enter Character to check - ");
    scanf("%c",&c);
    printf("You entered - %c",c);
    for(int i = 0;i<5;i++)
    {
        //printf("%c",vowel[i]);
        if(c == vowel[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n%c is vowel",c);
    }
    else
    {
        printf("\n%c is consonant",c);
    }
       
}