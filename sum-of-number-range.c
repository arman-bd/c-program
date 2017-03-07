/*
This program will sum all numbers in a range.
*/
#include<stdio.h>

int main(){
    // Declare Variables
    int range = 0;
    int i = 0;
    int sum = 0;

    // Get Input
    printf("Enter Range: ");
    scanf("%d", &range);

    for(i = 0; i <= range; i++){
        sum = sum + i;
    }

    // Result
    printf("Sum: %d", sum);

    // End Of Program
    return 0;
}
