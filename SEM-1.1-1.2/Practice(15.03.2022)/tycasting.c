#include<stdio.h>
int main()
{
    int a, b;
    float div;

    printf("Enter a for a: ");
    scanf("%d", &a);
    printf("Enter a for b: ");
    scanf("%d", &b);

    div = (float)a / b;

    printf("The div is %.2f", div);

    return 0;
}