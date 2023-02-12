#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d,x1,x2;
    printf("to find roots of a quadratic equation\n");
    printf("enter value of a:");
    scanf("%f,&a");
    printf("enter value of b:");
    scanf("%f,&b");
    printf("enter value of c");
    scanf("%f,&c");
    d=b*b-(4*a*c);
    if (d>0)
    {
        x1=-b-sqrt(d)/(2*a);
        x2=-b+sqrt(d)/(2*a);
        printf("roots are real and different");
        printf("root 1=%f,x1");
        printf("root 2=%f,x2");
    }
    else if (d==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("roots are real and equal");
        printf("root 1=%f,x1");
        printf("root 2=%f,x2");
    }
    else
    {
        printf("roots are real and imaginary");
    }
    return 0;
}
