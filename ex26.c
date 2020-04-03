#include<stdio.h>

union person
{
    char name[20]; // 20byte
    int age; //4 byte
} p; // total 20 byte

int main()
{
    printf("Enter Name ");
    scanf("%s",p.name);

    printf("Enter age ");
    scanf("%d",&p.age);

    printf("Name is %s",p.name);
    printf("\n Age is %d",p.age);
    return 0;
}
