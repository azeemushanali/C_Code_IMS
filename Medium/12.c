//12.	Quadrants in which coordinates lie
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter the X Co-ordinate - ");
    scanf("%d",&x);
    printf("Enter the Y Co-ordinate - ");
    scanf("%d",&y);
    if(x>0 && y>0)
    printf("Ist Quadrant");
    else if(x<0 && y>0)
    printf("IInd Quadrant");
    else if(x<0 && y<0)
    printf("IIIrd Quadrant");
    else if(x>0 && y<0)
    printf("IVrth Quadrant");
    else
    printf("Error");
}