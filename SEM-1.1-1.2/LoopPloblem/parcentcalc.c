#include<stdio.h>
int main(){
    float value;
    do
    {
        printf("Enter the Value: ");
        scanf("%f", &value);
        printf("After 15 Percent vat the value is %.2f\n", (value - (value*0.15)));
    }while (1);
   return 0; 
}