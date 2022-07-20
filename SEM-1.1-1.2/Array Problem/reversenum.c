#include<stdio.h>


//Function Declaration
int originalOrder(int num[], int n);
int reverseOrder(int num[], int n);


//Main Function
int main(){
    int nSet[]={10,20,30,40,50,60,70,80,90,100};
    originalOrder(nSet, 10);
    printf("\n");
    reverseOrder(nSet, 10);
    return 0;
}


//For Original Order print function
int originalOrder(int num[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", num[i]);
    }
    printf("\n");
}

//For Reverse Order print function
int reverseOrder(int num[], int n){
    for(int i=n-1; i>=0; i--){
        printf("%d\t", num[i]);
    }
    printf("\n");
}