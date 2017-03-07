/*
This program will check if a number is prime or not within a range.
*/
#include<stdio.h>

int isPrime(int number);
int main(){
    // Declare Variables
    int range = 0;
    int i = 0;
    int total = 0;

    // Get Input
    printf("Enter Range: ");
    scanf("%d", &range);

    for(i = 2; i <= range; i++){
        if(isPrime(i) == 1){
            printf("\n%d", i);
            total++;
        }
    }

    // Result
    printf("\n\nTotal %d prime numbers found from 1 to %d", total, range);
    printf("\n");

    // End Of Program
    return 0;
}

int isPrime(int number){
    int i = 0;
    int prime = 1;

    // Check if a number is prime or not
    for(i = 0; i < number; i++){

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
        if(number % i == 0){
            prime = 0;
            break;
        }
    }

    if(prime == 1){
        return 1;
    }else{
        return 0;
    }
}

