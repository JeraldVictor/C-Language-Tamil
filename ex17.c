/*
1. no Argument      No Return
2. with Argument    with return
3. No Argument      with Return
4. With Argument    no return
*/

#include<stdio.h>
void mess()
{
    printf("Somthing");
}

int sum(int a, int b)
{
    return a+b;
}
int give5()
{
    return 5;
}

void mul(int a,int b)
{
    printf("%d",a*b);
}

int main()
{
    mul(10,20); //4
    //printf("%d",give5()); //3
    //int c = sum(10,20); //2
    //printf("\n the sum is %d",c); //2
    //mess(); //1
    return 0;
}
