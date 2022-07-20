#include<stdio.h>

int isPrime(int n,int i){
    if(i==1){
        return 1;
    }
    else{
        if(n%i==0){
            return 0;
        }
        else{
            isPrime(n,i-1);
        }
    }
}
int main()
{
    int num,prime;
    printf("Enter a number: ");
    scanf("%d", &num);
    prime=isPrime(num,num/2);
    if(prime==1){
        printf("Prime number");
    }
    else{
        printf("Not Prime number");
    }
    return 0;
}