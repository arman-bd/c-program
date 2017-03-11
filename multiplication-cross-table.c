/*
This program will print a multiplication cross table for 1 to 9.
*/

#include<stdio.h>

int main(){
    int i = 0;
    int j = 0;
    int k = 0;

    printf(" N | 1  2  3  4  5  6  7  8  9  10");
    printf("\n----------------------------------");
    for(i = 1; i < 10; i++){
        printf("\n %d |", i);
        for(j = 1; j <= 10; j++){
            k = i * j;

            // For Proper Spacing
            if(k > 0 && k < 10){printf(" %d ", k);}
            if(k > 9 && k < 99){printf(" %d", k);}
            if(k > 99){printf("%d", k);}
        }
    }

    printf("\n");
    return 0;
}
