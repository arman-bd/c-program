#include<stdio.h>

int main(){
    float inp1, inp2;

    printf("Enter [x]: ");
    scanf("%f", &inp1);
    fflush(stdin); // To Clear STDIN [ for Windows ]

    printf("Enter [y]: ");
    scanf("%f", &inp2);

    printf("x * y = %.4f\n", inp1*inp2);

    return 0;
}

