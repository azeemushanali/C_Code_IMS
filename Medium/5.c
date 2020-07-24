//5.	Binary to decimal conversion
#include<stdio.h>
#include<math.h>
void main()
{
    long long number;
    printf("Enter the binary number - ");
    scanf("%lld",&number);
    printf("Converted decimal number of %lld is %d",number,cvt2decimal(number));
}
int cvt2decimal(long long num)
{
    int temp,dec_value=0,ones,i=0;
    temp = num;
    while (temp>0)
    {
        ones = temp%10;
        dec_value += pow(2,i) * ones;
        i++;
        temp /= 10;
    }
    return dec_value;
}