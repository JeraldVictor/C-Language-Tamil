/*
1   2   3   4
1   2   3   4
1   2   3   4
3x4
*/
#include<stdio.h>

int main()
{
    int arr[3][4] = {
    {
        1,2,3,4
    },
    {
        1,2,3,4
    },
    {
        1,2,3,4
    }
    };
    int i,j;
    for (i =0;i<3;i++){ //row
        for(j=0;j<4;j++){ // col
            printf("\n %d",arr[i][j]);
        }
    }
    return 0;
}
