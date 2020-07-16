//32.	Add two fractions
#include<stdio.h>
void main()
{
    int p1,p2,q1,q2,LCM;
    printf("Enter the numerator of first fraction - ");
    scanf("%d",&p1);
    printf("Enter the denomenator of first fraction - ");
    scanf("%d",&q1);
    printf("Enter the numerator of second fraction - ");
    scanf("%d",&p2);
    printf("Enter the denomenator of second fraction - ");
    scanf("%d",&q2);
    LCM = lcm(q1,q2);
    printf("Adding %d/%d + %d/%d  = %d/%d ",p1,q1,p2,q2,(LCM/q1)*p1 + (LCM/q2)*p2,LCM);
}
int lcm(int a,int b)
{
    int lcm,max;
    max = (a > b) ? a : b;
    lcm = max;
    while (1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            break;
        }
        lcm += max; //this is optimised 
        //we could also use this lcm ++ but this is not that optimised
    }
    //printf("LCM of %d and %d is %d",a,b,lcm);
    return lcm;
}