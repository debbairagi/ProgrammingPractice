#include<stdio.h>
int main()
{
    float a, b;
    float div;

    printf("Enter a for a: ");
    scanf("%f", &a);
    printf("Enter a for b: ");
    scanf("%f", &b);

    div = a / b;

    printf("The div is %.2f", div);

    return 0;
}