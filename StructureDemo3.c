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
    struct  Demo *p = &obj;

    p->i = 11;
    p->f= 90.4f;
    p->j = 21;
    

    obj.i = 11;
    obj.f = 89.99;
    obj.j = 21;

    printf("%d\n",obj.i);  
    printf("%f\n",obj.f);
    printf("%d\n",obj.j);
    
    return 0;
}