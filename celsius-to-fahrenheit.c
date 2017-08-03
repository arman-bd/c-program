#include<stdio.h>

int main(){
    float celsius, fahrenheit;

    // Formula: T(°F) = T(°C) × 9/5 + 32 = Celsius * 1.8 + 32
    printf("Enter Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;
    printf("\nFahrenheit: %.2f\n", fahrenheit);

    return 0;
}
