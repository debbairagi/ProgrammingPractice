#include<stdio.h>
int main()
{
    int i,n, tem1=0, tem2=1, nextTerm;

    printf("Enter your number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i=1; i<=n; i++)
        {
            printf("%d ", tem1);
            nextTerm= tem1+tem2;
            tem1=tem2;
            tem2=nextTerm;
        } 

    getch();
    return 0;
}