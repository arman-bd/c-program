#include<stdio.h>

int main(){
    int i;
    float avg = 0, sum = 0, inp[10] = {1,12,15,5,9,37,21,78,22,34};

    for(i = 0; i < 10; i++){
        sum = sum + inp[i];
    }

    avg = sum / 10;

    printf("Average: %.4f", avg);

    printf("\n");
    return 0;
}
