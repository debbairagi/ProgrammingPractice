#include<stdio.h>

main()
{
    int i,n;
    float num[100], sum=0.0, avg;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    while(n>100 || n<1)
    {
        printf("Message: Error! number rage should be (1-100)\n");
        printf("Please Enter the number again: ");
        scanf("%f", &n);
    }

    for(i=1;i<=n;i++)
    {
        scanf("%f", &num[i]);
        sum= sum+num[i];
    }
    avg=sum/n;
    printf("The average is %.2f", avg);



}