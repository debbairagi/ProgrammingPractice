//sum or average of N numbaer using array

#include<stdio.h>

int main()
{
    int N;
    printf("How many interger you want to input: ");
    scanf("%d", &N);
    printf("Now enter %d interger number of  input.\n", N);
    int a[N], sum=0;
    float avg;

    for(int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < N; i++)
    {
        sum = sum + a[i];
    }

    avg = sum / (float)N;

    printf("\nSum of %d numbers: %d\n", N, sum);
    printf("\nAverage of %d numbers: %f\n", N, avg);

    return 0;
}

