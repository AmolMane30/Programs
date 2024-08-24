#include<stdio.h>

struct nexter
{
    int no;
    float f;
    int i;
};

int main()
{
    struct nexter nobj;

    struct nexter *ptr = &nobj;

    ptr->no = 11;
    ptr->f = 90.99;
    ptr->i = 21;

    printf("%d\n",ptr->no);
    printf("%d\n",nobj.no);
    printf("%d\n",ptr->i);

    printf("%d\n",sizeof(nobj));

    return 0;
}