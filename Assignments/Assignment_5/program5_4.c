#include<stdio.h>

void CheckNumberType(int num)
{
    if( num > 0)
    {
        printf("%d Positive\n",num);
    }
    else if (num < 0)
    {
        printf("%d Negative\n",num);
    }
    else
    {
        printf("%d Zero\n",num);

    }

}
int main()
{
    int number;
    printf("Enter Number:");
    scanf("%d",&number);
    CheckNumberType(number);
    return 0;
}