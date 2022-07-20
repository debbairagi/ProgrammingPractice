#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant, root1,root2;
    printf("Input values for a: ");
    scanf("%f", &a);
    printf("Input values for b: ");
    scanf("%f", &b);
    printf("Input values for c: ");
    scanf("%f", &c);

    discriminant= b*b-4*a*c;
    if(discriminant<0)
        printf("\n ROOTS ARE IMAGINARY\n");
    else
        {
            root1=(-b+sqrt(discriminant))/2.0*a;
            root2=(-b-sqrt(discriminant))/2.0*a;
            printf("\n Root1 = %.2f \n Root2 = %.2f", root1, root2);
        }



    return 0;
}
