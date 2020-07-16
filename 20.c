//20.	Leap year or not
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year to check for Leap Year?  ");
    scanf("%d",&year);
    check_leap(year);
    return 0;
}
int check_leap(int y)
{
    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))
      printf("%d is a leap year", y);
   else
      printf("%d is not a leap year", y);
}