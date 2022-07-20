#include<stdio.h>
int main()
{
    int b,d,e,result,i;
    printf("Enter the number of terms: ");
    scanf("%d",&e);
    b=0;
    d=1;
    i=1;
    while(i<=e)
    {
        printf("%d ",b);
        result=b+d;
        b=d;
        d=result;
        i++;
    }
    return 0;
}
