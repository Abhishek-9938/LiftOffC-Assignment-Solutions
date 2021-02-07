#include<stdio.h>
int main()
{
    int n;
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    switch(n=(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'))
    {
        case 1:
        switch(n=(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U' ))
        {
        case 1:
        printf("The enter alphabet is a vowel");
        break;
        case 0:
        printf("The enter alphabet is a consonant");
        break;
        }
        
        break;
        case 0:printf("The enter character is not a alphabet");
        break;
    }
        return 0;

}