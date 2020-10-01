#include<stdio.h>

int main()
{
    float radius,circumference,area, pi;

    pi = 3.1415926535;

    // Equation:
    //  d = 2 * r
    //  C = pi * d
    //  A = pi * r^2

    // radius = r
    // area = A
    // circumference = C

    printf("Enter Radius: ");
    scanf("%f", &radius);

    circumference = 2*(pi*radius) ;
    area = pi * (radius * radius);

    printf("\nDiameter: %.8f", radius);
    printf("\nCircumference: %.8f", circumference);
    printf("\nArea: %.8f", area);

    printf("\n");

    return 0;
}
