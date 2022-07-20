#include<stdio.h>
int main(){
    for(int i=0;i<=100;i++){
        
        if(i>=25 && i<=76){
            continue;
        }
        printf("%d ",i);
    }

    return 0;
}