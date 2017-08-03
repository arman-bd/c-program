#include<stdio.h>

int main(){
    int year, month, week, days;

    printf("Enter Days: ");
    scanf("%d", &days);

    year = (days - (days % 365)) / 365; // Get Year
    days = (days % 365);

    month = (days - (days % 30)) / 30; // Get Month
    days = days % 30;

    week = (days - (days % 7)) / 7; // Get Week

    days = days % 7; // Days

    printf("\n%d Year, %d Month, %d Week and %d Days\n", year, month, week, days);

    return 0;
}
