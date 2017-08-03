#include<stdio.h>

int main(){
    float centimeter, meter, kilometer;

    // Equation:
    //  meter = cm / 100
    //  kilometer = meter / 1000

    printf("Enter Centimeter: ");
    scanf("%f", &centimeter);

    meter = centimeter / 100;
    kilometer = meter / 1000;

    printf("\nMeter: %.8f", meter);
    printf("\nKilometer: %.8f\n", kilometer);

    return 0;
}
