#include<stdio.h>
int main(){
    int p=2, n, sum=0;
    printf("Enter the order number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum = sum + i;
        printf("%d * %d = %d\n",p,i,p*i);
    }
    printf("The sum is %d\n", sum);

    return 0;
}