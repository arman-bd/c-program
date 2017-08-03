#include<stdio.h>

int main(){
    int i, key, large, inp[10] = {1,12,15,5,9,37,21,78,22,34};

    large = 0;
    key = 0;
    for(i = 0; i < 10; i++){
        if(inp[i] > large){
            large = inp[i];
            key = i;
        }
    }

    printf("Largest Element: %d\nPosition: %d", large, key+1);

    printf("\n");
    return 0;
}
