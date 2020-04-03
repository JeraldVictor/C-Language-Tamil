#include<stdio.h>

struct person
{
    int age
}*ptr,p;

int main()
{
    ptr = &p;
   printf("Enter Age ");
   scanf("%d",&ptr->age);
   printf("Age is %d ",ptr->age);
    return 0;
}
