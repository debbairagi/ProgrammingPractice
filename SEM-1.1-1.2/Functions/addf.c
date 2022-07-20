#include<stdio.h>


int sum(int x, int y); // Function Declaration

int sum(int x, int y){
    return x + y;
}// Function Defination


int main(){
    int a,b;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    int s = sum(a, b);
    printf("Sum is %d\n", s);

    return 0;
}