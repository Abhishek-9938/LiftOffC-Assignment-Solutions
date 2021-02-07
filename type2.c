#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temperature in celcius scale");
    scanf("%f",&C);
    F=1.8*C+32;
    printf("temperature in fahrenheit scale=%f",F);
    return 0;
}