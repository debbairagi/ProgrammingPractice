#include<stdio.h>
#include<math.h>

int main()
{
    int i=1,j=1;
    int  arr [4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

    //Printing 2d Array

    for(i=1;i<5;i++)
    {
        for(j=1;j<4;j++)
        {
            printf("arr[%d][%d]= %d\n",i,j, arr[i][j]);
        }
    }



}