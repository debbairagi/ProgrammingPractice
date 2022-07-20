#include <stdio.h>

// Function Declaration
float sum(float x, float y);
float subtrac(float x, float y);
float multiple(float x, float y);
float div(float x, float y);

float main()
{
    float a, b;
    printf("SIMPLE CALCULATOR USING FUNCTION\n");
    printf("S for Summation\n");
    printf("B for Subtracion\n");
    printf("M for Multiplication\n");
    printf("D for Division\n");

    printf("Enter your choice: \n");
    char character = getchar();
    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    switch (character)
    {
    case 'S':
        float Sum = sum(a, b);
        printf("Sum is %.2f\n", Sum);
        break;

    case 'B':
        float Subtrac = subtrac(a, b);
        printf("Subtrac is %.2f\n", Subtrac);
        break;

    case 'M':
        float Multiple = multiple(a, b);
        printf("Multiple is %.2f\n", Multiple);
        break;
    case 'D':
        float Division = div(a, b);
        printf("Division is %.2f\n", Division);
        break;

    default:
        printf("Invalid Choice");
    }
    return 0;
}

float sum(float x, float y)
{ // calculate addition between two input
    return x + y;
}
float subtrac(float x, float y)
{ 
    return x - y;
}
float multiple(float x, float y)
{
    return x * y;
}
float div(float x, float y)
{
    return x / y;
}
