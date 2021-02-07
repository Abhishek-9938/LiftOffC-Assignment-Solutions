#include<stdio.h>
#include<stdio.h>
int main()
{
    int a,b,add,sub,mult;
    float div;
    printf("enter the 1st no:");
    scanf("%d",&a);
    printf("enter the 2nd no:");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mult=a*b;
    div=(a/b)*1.0;
    printf("\nAddition=%d",add);
    printf("\nSubstraction=%d",sub);
    printf("\nmultiplication=%d",mult);
    printf("\nDivision=%f",div);
    return 0;
}