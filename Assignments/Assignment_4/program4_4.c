#include<stdio.h>

int SumNonFact(int iNo)
{
    int i= 0;
    int isum = 0;
    
    if(iNo<= 0)
    {
        iNo = -iNo;
    }
    for(i = 1;i<=iNo;i++)
    {
        if(iNo % i !=0)
        {
            isum += i;
        }
    }
    
    return isum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);
    iRet = SumNonFact(iValue);

    printf("%d",iRet);
    return 0;
}