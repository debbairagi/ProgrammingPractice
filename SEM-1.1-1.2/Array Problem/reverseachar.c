#include<stdio.h>
int main(){
    char name[8]="DEBBINDU";

    //Origianal Order
    for(int i=0;i<8; i++)
    {
        printf("%c", name[i]);
    }
    
    printf("\n");

    //Reverse Order
    for(int i=8; i>=0; i--){
        printf("%c", name[i]);
    }

    return 0;
}