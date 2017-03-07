/*
This program will tell if given number is even or odd
*/

#include<stdio.h>

int main(){
    // Declare Variables
    int number = 0;

    // Get Input
    printf("Enter Number: ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("%d is even", number);
    }else{
        printf("%d is odd", number);
    }

    // New Line
    printf("\n");

    // End Of Program
    return 0;
}
