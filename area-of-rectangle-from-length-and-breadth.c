#include<stdio.h>

int main(){
    float length, breadth, area;

    // Equation: A = wl
    // area = A
    // breadth = width = w
    // length = l

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter Breadth: ");
    scanf("%f", &breadth);

    area = breadth * length;

    printf("\nArea: %.2f\n", area);

    return 0;
}
