int a = 10;

//Syntax
//data_type array_Name[size];

#include<stdio.h>

int main()
{
    int mark[5];
    mark[0] = 10;
    mark[1] = 20;
    mark[2] = 40;
    mark[3] = 50;
    mark[4] = 60;
    int i;

    int arr[] = { 1,2,3,4,5 };
    int arr1[5] = { 5,4,3,2,1 };

    for(i=0; i<5 ;i++)
    {
        printf("\n %d \t %d ",arr[i],arr1[i]);
        //printf("\n %d",mark[i]);
    }
    return 0;
}
