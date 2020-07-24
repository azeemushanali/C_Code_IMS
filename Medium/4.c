//4.	Replace all 0's with 1 in a given integer
#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number - ");
    scanf("%d",&number);
    printf("Converted number of %d is %d",number,convert(number));
}
int convert(int number)
{
    if(number==0)
        return 1;
    else
        convert2(number);
}
int convert2(int num)
{
    int ones;
    if(num==0)
        return 0;
    ones = num%10;
    if(ones == 0)
        ones = 1;
    return convert2(num/10) * 10 + ones;
}