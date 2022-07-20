#include<stdio.h>


//Function Declaration
void original(char name[], int n);
void reverse(char name[], int n);


//Main Function
int main(){
    char arr[]="DEBBINDU";
    original(arr, 9);
    reverse(arr, 9);
    original(arr, 9);
    return 0;
}

//For Original Order print function
void original(char name[], int n){
    for(int i=0; i<n; i++){
        printf("%c", name[i]);
    }
    printf("\n");
}

//For Reverse Order print function
void reverse(char name[], int n){
    for(int i=0; i<n/2; i++){
        char firstval = name[i];
        char secondval = name[n-i-1];
        name[i]=secondval;
        name[n-i-1]=firstval;
    }
    printf("\n");
}

