#include<stdio.h>

int main(){
    int i = 0;
    float average = 0, marks[5] = {0, 0, 0, 0, 0}, total = 0, percent = 0;



    for(i = 0; i < 5; i++){
        printf("Subject [%d]: ", i+1);
        scanf("%f", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5;
    percent = (total / (5 * 100)) * 100;

    printf("Total: %.0f\nAverage: %.2f\nPercent: %.2f\n", total, average, percent);

    return 0;
}
