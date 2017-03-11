/*
This program takes an input and increase it by n%
*/

#include<stdio.h>

int main(){
    float input = 0;
    float increment = 0;
    float output = 0;
    float increase = 0;

    // Ask For Input
    printf("Enter Base Value: ");
    scanf("%f", &input);

    // Ask For Increment
    printf("Enter Increment%: ");
    scanf("%f", &increment);

    // Print Output
    output = input + (input / 100 * increment);
    printf("Output: %.2f", output);

    // Print Increase
    increase = output - input;
    printf("\nIncrease: %.2f", increase);

    printf("\n");
    return 0;
}
