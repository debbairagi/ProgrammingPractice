#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("How many rows you wanna print: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) //loop for row print
        {
            for(j=1; j<=2*n-1; j++)  //Number Of Coloum
            { 
               if(j>=(n-i)+1 && j<=(n+i)-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
        
            }
        
            printf("\n");
        }


    return 0;
}