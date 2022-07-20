#include<stdio.h>
int main(){
    int i, sum=0, count=0;
    for(i=1;i<=100;i++){
        if(i%6==0 && i%4!=0){
            printf("%d ",i);
            count++;
            sum=sum+i;
        }

    }
    printf("\nDivisible by 6 and Not Divisible by 4 is = %d number\n",count);
    printf("The ssum of these integer are = %d",sum);



    return 0;
}
