#include<stdio.h>
int main()
{
    char grade;
    float P,C,B,M,Comp,PER;
    printf("enter the mark in physics:");
    scanf("%f",&P);
    printf("enter the mark in chemistry:");
    scanf("%f",&C);
    printf("enter the mark in biology:");
    scanf("%f",&B);
    printf("enter the mark in mathematics:");
    scanf("%f",&M);
    printf("enter the mark in computer science:");
    scanf("%f",&Comp);
    PER=(P+C+B+M+Comp)/5.0;
    if(PER>=90)
    grade='A';
    else
    if(PER>80)
    grade='B';
    else
    if(PER>=70)
    grade='C';
    else
    if(PER>=60)
    grade='D';
    else
    if(PER>=40)
    grade='E';
    else
    if(PER<40)
    grade='F';
    printf("PERCENTAGE=%f",PER);
    printf("\nGRADE=%c",grade);
    return 0;



}