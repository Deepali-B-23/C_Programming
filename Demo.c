#include <stdio.h>

int main()
{
    char Div='\0';
    int Age='0';

    printf("enter your division:\n");
    scanf("%c",&Div);

    printf("enter your age:\n");
    scanf("%d",&Age);

    printf("Your Division is:%c\n",Div);
    printf("Your age is:%d\n",Age);

    return 0;
}