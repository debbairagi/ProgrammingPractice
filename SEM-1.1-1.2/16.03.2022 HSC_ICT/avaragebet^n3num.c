#include<stdio.h>
int main()
{
    int a,b,c, average;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter last number: ");
    scanf("%d",&c);

    average= (a+b+c)/3;

    printf("The average is %d", average);

    return 0;
}
