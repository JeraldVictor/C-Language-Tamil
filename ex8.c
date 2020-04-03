#include<stdio.h>

int main()
{
    int a =10,b=20,c;
    if(a==b)
    {
        c = a+ b;
        printf("Equal");
    }else
    {
        c = a*b;
        printf("Not Equal");
    }
    printf("Value of c is %d ",c);

    //condition ? " true " : "false " ;
    c = (a == b) ? a+b :a*b;
    printf("Value of c is %d ",c);
    return 0;
}
