#include<stdio.h>


void DisplayVowel(char cValue)
{
    if(cValue=='a'||cValue=='e'||cValue=='i'||cValue=='o'||cValue=='u'
        ||cValue=='A'||cValue=='E'||cValue=='I'||cValue=='O'||cValue=='U')
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayVowel(cValue);
    return 0;
}