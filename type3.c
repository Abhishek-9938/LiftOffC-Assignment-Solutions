#include<stdio.h>
int main()
{
    float r,d,C,A;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    d=2.0*r;
    C=3.14*2*r;
    A=3.14*r*r;
    printf("\nDiameter=%f",d);
    printf("\nCircumference=%f",C);
    printf("\nArea=%f",A);
    return 0;
}