#include<stdio.h>

int Marks = 89;

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.78f;
    double dValue = 90.564323;

    printf("size of character is : %d\n",sizeof(cValue));
    printf("size of int is : %d\n",sizeof(iValue));
    printf("size of float is : %d\n",sizeof(fValue));
    printf("size of double is : %d\n",sizeof(dValue));

    return 0;

}
