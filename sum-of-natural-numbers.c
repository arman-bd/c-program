#include<stdio.h>

int main(){
    int start, end, sum = 0;

    printf("Start: ");
    scanf("%d", &start);
    fflush(stdin); // To Clear STDIN [ for Windows ]

    printf("End: ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++){
        sum = sum + i;
    }

    printf("Sum: %d", sum);

    printf("\n");
    return 0;
}
