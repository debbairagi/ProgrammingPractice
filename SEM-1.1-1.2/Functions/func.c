#include<stdio.h>

void printPronam(); //Function Declaration
void printNamaste();


int main(){
    printf("Enter H for Hindi & B for Bangla: ");
    char ch;
    scanf("%c", &ch);
    if(ch== 'H'){
        printNamaste();
    }else{
        printPronam();
    }

    return 0;
}
//Functon Defination
printPronam(){
    printf("Pronam In Bangla\n");
}
printNamaste(){
    printf("Namaste In Hindi\n");
}

