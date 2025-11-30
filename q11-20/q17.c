//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("enter coefficent a,b,c respectively : \n");
    scanf("%d %d %d",&a,&b,&c);
    if (b*b-4*a*c>0)
    {
        float x1 = (-b+sqrt(b*b-4*a*c))/2*a;
        float x2 = (-b-sqrt(b*b-4*a*c))/2*a;
        printf("roots are real and diffferent and are %f,%f",x1,x2);
        
    }
    else if (b*b-4*a*c==0)
    {
        float x1 = -b+sqrt(b*b-4*a*c)/2*a;
        float x2 = -b-sqrt(b*b-4*a*c)/2*a;
        printf("roots are real and same and are %f,%f",x1,x2);
        
    }
    else
    {
        printf("roots are imaginary");
    }
    return 0;

}