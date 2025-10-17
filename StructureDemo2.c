#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{

    struct Demo obj;

    obj.i = 11;
    obj.f = 89.99;
    obj.j = 21;

    printf("%d\n",obj.i);  
    printf("%f\n",obj.f);
    printf("%d\n",obj.j);
    
    return 0;
}