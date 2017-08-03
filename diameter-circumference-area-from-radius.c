#include<stdio.h>

int main(){
    float radius, diameter, circumference, area, pi;

    pi = 3.1415926535;

    // Equation:
    //  d = 2 * r
    //  C = pi * d
    //  A = pi * r^2

    // radius = r
    // area = A
    // diameter = d
    // circumference = C

    printf("Enter Radius: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = pi * diameter;
    area = pi * (radius * radius);

    printf("\nDiameter: %.8f", diameter);
    printf("\nCircumference: %.8f", circumference);
    printf("\nArea: %.8f", area);

    printf("\n");

    return 0;
}
