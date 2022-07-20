#include<stdio.h>
int main()
{
    int i,j,k,n;

    printf("How many rows you wanna print: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++) //loop for row print
        {
            for(j=n-1; j>=i; j--)  //spaceloop
            { 
                printf(" ");
            }
            
            
            for(k=1;k<=i;k++) //print loop
            {
                printf("* ");
            }
            printf("\n");
        }


    return 0;
}