#include<stdio.h>

int main()
{
    // i == 1 break
    int i=1;
    // entry check loop
    while(i != 1)
    {
        printf("%d",i);
    }

    //Exit check Loop
    do{
        printf("%d",i);
    }while(i != 1);
    return 0;
}
