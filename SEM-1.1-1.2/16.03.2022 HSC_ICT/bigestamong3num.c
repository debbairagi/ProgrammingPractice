#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    printf("Enter Third number: ");
    scanf("%d", &c);

    if((a>b) && (a>c))
        {
            printf("%d is bigest", a);
        }
    else if((b>a) && (b>c))
        {
            printf("%d is bigest", b);
        } 
    else
        printf("%d is bigest",c);

        getch();
    return 0;
}