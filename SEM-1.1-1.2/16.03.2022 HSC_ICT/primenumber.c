#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a positive integer number: ");
    scanf("%d", &n);
        
        if(n==2){
        printf("%d is a prime number.", n);
        return 0;
        }
        

        for(i=2; i<=n; i++)
        {
            if(n%i==0)
            {
                printf("%d is not prime number",n);
                break;
            }
            else{
                printf("%d is a prime number", n);
                break;
            }
            
        }

        return 0;

}