/*
This program will draw a triangle with asterisks (*)
*/

#include<stdio.h>

int main(){
    int i = 0;
    int j = 0;

    for(i = 20; i > 0; i--){
        printf("\n");
        for(j = 20; j > i; j--){
            printf("*");
        }
    }

    printf("\n");
    return 0;
}
