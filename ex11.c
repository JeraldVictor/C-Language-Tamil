#include<stdio.h>

int main()
{
    // enter 5 to exit
    int n;
    do{
        printf("\n 1. Add \n 2. Sub \n 3. Mul \n 4. Div \n 5.Exit\n");
        scanf("%d",&n);
    }while(n != 5 );
    return 0;
}
