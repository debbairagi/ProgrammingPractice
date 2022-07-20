#include<stdio.h>
int main()
{
    int i,j,n;

    printf("How many rows you wanna print: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }


    return 0;
}
