/*
This program will tell if given year is leap or not
*/

#include<stdio.h>

int main(){
    // Declare Variables
    int year = 0;

    // Get Input
    printf("Enter Year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        printf("%d is leap year", year);
    }else{
        printf("%d is not leap year", year);
    }

    // New Line
    printf("\n");

    // End Of Program
    return 0;
}
