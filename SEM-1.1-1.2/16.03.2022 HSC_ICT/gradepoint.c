#include<stdio.h>
int main()
{
    int mark;

    printf("Enter your score: ");
    scanf("%d", &mark);

    if((mark>=80) && (mark<=100))
        printf("Your grade is A+");
    else if((mark>=70) && (mark<=79))
        printf("Your grade is A");
    else if((mark>=60) && (mark<=69))
        printf("Your grade is A-");
    else if((mark>=50) && (mark<=59))
        printf("Your grade is B");
    else if((mark>=40) && (mark<=49))
        printf("Your grade is C");
    else if((mark>=33) && (mark<=39))
        printf("Your grade is D");
    else
        printf("Your grade is F");

        getch();

    return 0;
}
