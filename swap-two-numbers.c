#include<stdio.h>

int main(){
    int temp;
    int inp1, inp2;

    printf("Enter Number [1]: ");
    scanf("%d", &inp1);
    fflush(stdin); // To Clear STDIN [ for Windows ]

    printf("Enter Number [2]: ");
    scanf("%d", &inp2);

    printf("\nNumber [1]: %d", inp1);
    printf("\nNumber [2]: %d", inp2);

    printf("\n\nAfter Swapping\n");

    temp = inp1;
    inp1 = inp2;
    inp2 = temp;

    printf("\nNumber [1]: %d", inp1);
    printf("\nNumber [2]: %d", inp2);

    printf("\n");
    return 0;
}


