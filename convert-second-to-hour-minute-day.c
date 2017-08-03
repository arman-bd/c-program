#include<stdio.h>

int main(){
    int seconds, minute, hour, days;

    printf("Enter Seconds: ");
    scanf("%d", &seconds);

    days = (seconds - (seconds % (60*60*24))) / (60*60*24); // Get Days
    seconds = (seconds % (60*60*24));

    hour = (seconds - (seconds % (60*60))) / (60*60); // Get Hour
    seconds = seconds % (60*60);

    minute = (seconds - (seconds % 60)) / 60; // Get Minute
    seconds = seconds % 60; // Seconds

    printf("\n%d Days, %d Hours, %d Minutes and %d Seconds\n", days, hour, minute, seconds);

    return 0;
}
