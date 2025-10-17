#include<stdio.h>

int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;


    printf("size od integer is : %d\n",sizeof(i));            //4
    printf("size od short integer is : %d\n",sizeof(j));       //2
    printf("size od long integer is : %d\n",sizeof(k));       //8 or //4 depends on platforms



    return 0;
}