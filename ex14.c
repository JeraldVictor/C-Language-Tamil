//Calculator
 /*
 1. Add
 2. Sub
 3. Mul
 4. div
 5. exit
 */
#include<stdio.h>

int main()
{
    int n,a,b,c;
    do{
        printf("\n 1. Add \n 2. Sub \n 3. Mul \n 4. Div \n 5. Exit\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                printf("Enter the 1st Number \t");
                scanf("%d",&a);
                printf("\nEnter the 2nd Number \t");
                scanf("%d",&b);
                c = a+b;
                printf("\nThe Sum is %d",c);
            }break;
        case 2:
            {
                printf("Enter the 1st Number \t");
                scanf("%d",&a);
                printf("\nEnter the 2nd Number \t");
                scanf("%d",&b);
                c = a-b;
                printf("\nThe Diffrence is %d",c);
            }break;
        case 3:
            {
                 printf("Enter the 1st Number \t");
                scanf("%d",&a);
                printf("\nEnter the 2nd Number \t");
                scanf("%d",&b);
                c = a*b;
                printf("\nThe Product is %d",c);
            }break;
        case 4:
            {
                 printf("Enter the 1st Number \t");
                scanf("%d",&a);
                printf("\nEnter the 2nd Number \t");
                scanf("%d",&b);
                if(a > b ){
                    c = a/b;
                }else{
                    c = b/a;
                }

                printf("\nThe Q is %d",c);
            }break;
            default:
                {
                    printf("Invalid Choice");
                }break;
        }
    }while(n != 5 );
    return 0;
}
