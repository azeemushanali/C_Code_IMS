//6.	Decimal to binary conversion
#include<stdio.h>
long cvt2binary(int n) {
    long long bin = 0;
    int rem, i = 1, step = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}
void main()
{
    int number;
    printf("Enter the binary number - ");
    scanf("%d",&number);
    printf("Converted decimal number of %d is %lld",number,cvt2binary(number));
}
