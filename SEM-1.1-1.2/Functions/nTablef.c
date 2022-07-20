#include<stdio.h>

void printTable(int n);

void printTable(int n){//parameter/ formal parameter
    for(int i=1; i<=10; i++){
        printf("%d = %d * %d\n",i*n, n, i);
    }
}

int main(){
    int a;
    printf("The the number of order: ");
    scanf("%d", &a);

    printTable(a);


    return 0;
}