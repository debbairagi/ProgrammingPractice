#include<stdio.h>

main()
{
    int i,n, sum=0, numbers;
    float average;
    printf("Enter how many number you want: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &numbers);
        sum=sum+numbers;

    }

    average=sum/n;

    printf("Average is %.2f", average);

    return 0;
}