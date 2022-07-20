#include<stdio.h>
int main(){
    int i,n;
    int fact=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact= fact*i;
    }
    printf("%d! Factotial = %d",n, fact);

    return 0;
}