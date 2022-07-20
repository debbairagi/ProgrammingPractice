#include<stdio.h>
#include<math.h>

int main()
{
    int i=0,j=0;
    int  arr[5][6];

    //Input 2d Array

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    //printing 2d array element

    for(i=0;i<5;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("arr[%d][%d]= %d\n",i,j,arr[i][j]);
        }
    }
    return 0;



}