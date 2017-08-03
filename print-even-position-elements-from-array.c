#include<stdio.h>

int main(){
    int i;
    char element[10][32] = {"Abraham Lincoln", "Mother Teresa", "Martin Luther King",
                            "Nelson Mandela", "Muhammad Ali", "Mahatma Gandhi",
                            "Winston Churchill ", "Christopher Columbus", "Charles Darwin",
                            "Neil Armstrong"}; // 10 element of 32 bit

    printf("Elements on Even Position:\n");

    for(i = 0; i < 10; i++){
        if((i+1) % 2 == 0){
            printf("\n%s", element[i]);
        }
    }

    printf("\n");

    return 0;
}
