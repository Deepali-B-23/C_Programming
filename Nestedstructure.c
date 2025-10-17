#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int no;
    float Marks;
    struct Demo dobj;  //Nested
};

int main()
{
    printf("size of hello structure : %lu\n",sizeof(struct Hello));
    return 0;
}