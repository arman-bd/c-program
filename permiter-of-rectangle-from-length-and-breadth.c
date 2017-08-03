#include<stdio.h>

int main(){
    float length, breadth, perimeter;

    // Equation: P = 2(l+w)
    // perimeter = P
    // breadth = width = w
    // length = l

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter Breadth: ");
    scanf("%f", &breadth);

    perimeter = 2 * (length + breadth);

    printf("\nPerimeter: %.2f\n", perimeter);

    return 0;
}
