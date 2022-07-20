#include<stdio.h>


double add(int x, int y){
    return x+y;
}
double sub(int x, int y){
    return x-y;
}
double mult(int x, int y){
    return x*y;
}
double div(int x, int y){
    return x/y;
}
int main()
{
    char sign;
    double num1,num2;
    printf("Enter the operator: ");
    scanf("%c", &sign);
    printf("Enter the two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    switch (sign)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2,add(num1,num2));
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2,sub(num1,num2));
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2,mult(num1,num2));
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", num1, num2,div(num1,num2));
        break;      
    default:
        printf("!Error!");
        break;
    }
    return 0;
}