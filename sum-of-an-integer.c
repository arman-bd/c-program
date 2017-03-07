/*
This program will ask user for an integer input.
Then it add each number and output the result.
*/

#include<stdio.h>

int main(){
    // Declare Variables
    int numbers = 0;
    int remain = 0;
    int sum = 0;

    // Get Input
    printf("Enter An Integer: ");
    scanf("%d", &numbers);

    while(numbers != 0){
        remain = numbers % 10;
        numbers = numbers / 10;
        sum = sum + remain;
    }

    // Print Reversed Number
    printf("Sum: %d", sum);

    // New Line
    printf("\n");

    // End Of Program
    return 0;
}
