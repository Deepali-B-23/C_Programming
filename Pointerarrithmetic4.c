#include <stdio.h>

int main()
{
    int Arr[]={11,21,31,41,51,61};
    int *p = NULL;
    int *q = NULL;

    p = &(Arr[1]);
    q = &(Arr[4]);

    printf("Result of the subtraction is : %ld\n",q-p); //allowed

    q = q-2;
    printf("Data pointed by q is %d\n",*q);

    return 0;
}
