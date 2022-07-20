#include<stdio.h>

// Function Declaration
int sum(int x, int y);
int subtrac(int x, int y);
int multiple(int x, int y);
int div(int x, int y);

int main(){
    int a,b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    int Sum = sum(a, b);
    int Subtrac = subtrac(a,b);
    int Multiple = multiple(a,b);
    int Division = div(a,b);

    printf("Sum is %d\n", Sum);
    printf("Subtrac is %d\n", Subtrac);
    printf("Multiple is %d\n", Multiple);
    printf("Division is %d\n", Division);

    return 0;
}

int sum(int x, int y){ //calculate addition between two input
    return x + y;
}
int subtrac(int x, int y){ //calculate subtraction between two input
    return x - y;
}
int multiple(int x, int y){ //calculate multiplication between two input
    return x * y;
}
int div(int x, int y){ //calculate division between two input
   return x / y;
}
