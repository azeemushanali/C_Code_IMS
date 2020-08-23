//14.	Number of days in a given month of a given year
#include<stdio.h>
int check_leap(int y)
{
    if (((y % 4 == 0) && (y % 100!= 0)) || (y%400 == 0))
      return 1;
   else
      return 0;
}
void main()
{
    int i,month,year;
    printf("Enter the month - ");
    scanf("%d",&month);
    printf("Enter the year - ");
    scanf("%d",&year);
    if(check_leap(year)==1 && month==2)
    printf("February has 29 days in leap year");
    else if(month == 2 && check_leap(year)!=1)
    printf("February has 28 days in non Leap Years");
    else if((month == 1 || month ==3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12 ))
    printf("Number of days are 31");
    else
    printf("Number of days are 30");
    //getch();
}