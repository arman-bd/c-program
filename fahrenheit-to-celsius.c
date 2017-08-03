#include<stdio.h>

int main(){
    float celsius, fahrenheit;

    // Formula: T(°C) = (T(°F) - 32) / 1.8
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius =  (fahrenheit - 32) / 1.8;
    printf("\nCelsius: %.2f\n", celsius);

    return 0;
}
