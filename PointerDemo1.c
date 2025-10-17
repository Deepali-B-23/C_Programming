#include<stdio.h>

int main()
{   int iValue = 11;
    char cValue = 'M';
    
    int *iPtr = &iValue;
    char *cPtr  = &cValue;

    printf("size of iptr : %lu\n",sizeof(iPtr));
    printf("size of cptr : %lu\n",sizeof(cPtr));
    
    return 0;
}