#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j, temp, n = 10, elements[10] = {11, 24, 66, 21, 25, 70, 44, 62, 28, 63};

    printf("Normal Order:\n");
    for(i = 0; i < n; i++){
        printf("%d ", elements[i]);
    }

    //j = n - 1;
    for(i = 0, j = n - 1; i < abs(n/2); i++, j--){
        temp = elements[j];
        elements[j] = elements[i];
        elements[i] = temp;
    }


    printf("\nReversed Order:\n");
    for(i = 0; i < n; i++){
        printf("%d ", elements[i]);
    }

    printf("\n");
    return 0;
}
