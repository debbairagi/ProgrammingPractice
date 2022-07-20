#include<stdio.h>
int main()
{
    int math,phy,che;
    printf("Enter marks for mathematics : ");
    scanf("%d", &math);
    printf("Enter marks for physics : ");
    scanf("%d", &phy);
    printf("Enter marks for chemistry : ");
    scanf("%d",&che);

    if(math > 100 || phy > 100 || che > 100)
    {
        printf("Invalid Marks");
    }
    return 0;

    if(math>=80 && phy>=50 && che>=40)
        {
            if((math+phy+che) >= 200)
            {
                printf("\nYou are eligible for the admission");
            }
            else if((math+phy) >= 150)
            {
                printf("\nYou are eligible for the admission");
            }
            else
            {
                printf("\nYou are not eligible for admission");
            }
            
        }
        printf("\n");

        return 0;

}