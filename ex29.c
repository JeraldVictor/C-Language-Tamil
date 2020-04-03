#include<stdio.h>

int main()
{
    /*
    1.    double    8   bytes
    2.    float     4   bytes
    3.    int       4   bytes
    4.    char      1   byte
    5.    bool      1   byte
    */
    int a = 10;
    float b = a;
    printf("%f",b);

    int abc =(int) 39.6767;
    printf("%d",abc);
    return 0;
}
