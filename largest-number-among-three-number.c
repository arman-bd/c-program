#include<stdio.h>

int main(){
    int i, large;
    int inp[3];


    for(i = 0; i < 3; i++){
        printf("Enter Number [%d]: ", i+1);
        fflush(stdin); // To Clear STDIN [ for Windows ]
        scanf("%d", &inp[i]);
    }

    large = inp[0];
    for(i = 0; i < 3; i++){
        if(inp[i] > large){
            large = inp[i];
        }
    }

    printf("\nLargest Number: %d", large);

    printf("\n");
    return 0;
}
