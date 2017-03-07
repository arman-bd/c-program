/*
This program will ask user for an integer input.
Then it will reverse the number and output it.
*/

#include<stdio.h>

int main(){
    // Declare Variables
    int numbers = 0;
    int reverse = 0;
    int remain = 0;

    // Get Input
    printf("Enter An Integer: ");
    scanf("%d", &numbers);

    while(numbers != 0){
        remain = numbers % 10;
        numbers = numbers / 10;
        reverse = reverse * 10 + remain;
    }

    // Print Reversed Number
    printf("Reverse: %d", reverse);

    // New Line
    printf("\n");

    // End Of Program
    return 0;
}

