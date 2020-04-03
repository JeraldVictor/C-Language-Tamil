#include<stdio.h>

struct person
{
    char name[50];
    int age;
    char address[50];
}p1;
int main()
{
    printf("Enter name\t");
    scanf("%s",p1.name);
    printf("Enter Age\n");
    scanf("%d",&p1.age);
    printf("Enter address \n");
    scanf("%s",p1.address);

    printf("Name is %d ",&p1.name);
    printf("\nAge is %d",&p1.age);
    printf("\nAddress %d",&p1.address);
    return 0;
}
