#include<stdio.h>

int main()
{
    int a =10;
    int *p = &a;
    printf("The Address is %d and Value is %d",p,*p);

    int arr[] = {1,2,3,4,5};
    int *ptr[5];
    int i;
    for(i=0;i<5;i++)
    {
        ptr[i] = &arr[i];
    }
    for(i=0;i<5;i++)
    {
        printf("\t %d",*ptr[i]);
    }

    return 0;
}
