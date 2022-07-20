#include<stdio.h>
int main()
{
    int n, b, d, result=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    d=n;
    while(d!=0)
    {
        b=d%10;
        result=result*10 + b;
        d=d/10;
    }
    if
    (result==n)
        printf("Its a palindrome Number.");
    else
        printf("No! Its not a palindrome number.");
    return 0;
}
