#include<stdio.h>
main()
{
    int d;
    float sum;
    sum = 0;
    for(d =1; d<=10; d++)
        {
            sum = sum + 1/(float)d;
            printf("%2d \t%.4f\n", d, sum);
        }
    return 0;
}