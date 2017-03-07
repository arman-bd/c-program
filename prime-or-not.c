/*
This program will check if a number is prime or not.
*/

#include<stdio.h>

int main(){
    // Declare Variables
    int numbers = 0;
    int i = 0;
    int prime = 1;

    // Get Input
    printf("Enter An Integer: ");
    scanf("%d", &numbers);

    for(i = 0; i < numbers; i++){

        // This is to avoid division by 0 and 1
        if(i == 0 || i == 1){
            continue;
        }

        // This is to avoid division by any even number after 2
        if(i > 2 && i % 2 == 0){
            continue;
        }

        // If this number can be divided by
        // any number greater then 1 and less then that number
        // then it is not a prime number.
        if(numbers % i == 0){
            prime = 0;
            break;
        }
    }

    // Print Reversed Number
    if(prime == 1){
        printf("%d Is A Prime Number!", numbers);
    }else{
        printf("%d Is Not A Prime Number!", numbers);
    }

    // New Line
    printf("\n");

    // End Of Program
    return 0;
}
