#include<stdio.h>
main()
{
    int i, j, temp;

    int deb[10]={50,30,80,10,40,90,60,10,100,20};

    for(i=0;i<10;i++)
    {
        printf("%d ", deb[i]);

    }
    printf("\n");
    printf("Reverse: ");
    for(i=9;i>=0;i--)
    {
        printf("%d ", deb[i]);

    }
    return 0;
}
