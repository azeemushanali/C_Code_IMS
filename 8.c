//8.	Area of a circle
#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radius of the circle - ");
    scanf("%d",&r);
    //area = 3.14*r*r;
    area = PI*r*r;
    printf("The area of the circle with radius %d is %f ",r,area);    
}