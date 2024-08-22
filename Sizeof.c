#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 21.44;
    double d = 7.2352553;
    int arr[5];
    double brr[4];
    float crr[8];
    char drr[3];

    printf("%d \n",sizeof(ch));
    printf("%d \n",sizeof(i));
    printf("%d\n",sizeof(f));
    printf("%d\n",sizeof(d));
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(brr));
    printf("%d\n",sizeof(crr));
    printf("%d\n",sizeof(drr));


    return 0;
}