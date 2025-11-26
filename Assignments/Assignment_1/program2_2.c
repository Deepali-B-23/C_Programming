#include<stdio.h>

void Display(int iCnt)
{
    
 
    while(iCnt>=1)
    {
        printf("*");
        iCnt--;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}