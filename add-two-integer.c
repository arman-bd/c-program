#include<stdio.h>

int main(){
    int inp1, inp2;

    printf("Enter Integer [x]: ");
    scanf("%d", &inp1);
    fflush(stdin); // To Clear STDIN [ for Windows ]

    printf("Enter Integer [y]: ");
    scanf("%d", &inp2);

    printf("x + y = %d", inp1+inp2);


    printf("\n");
    return 0;
}

