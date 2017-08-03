#include<stdio.h>
#include<string.h>

int main(){
    int i = 0, j = 0;
    char element[10][32] = {"Abraham Lincoln", "Mother Teresa", "Martin Luther King",
                            "Nelson Mandela", "Muhammad Ali", "Mahatma Gandhi",
                            "Winston Churchill ", "Christopher Columbus", "Charles Darwin",
                            "Neil Armstrong"}; // 10 element of 32 bit
    char temp[32];

    printf("Normal Order: \n");
    for(i = 0; i < 10; i++){
        printf("\n%s", element[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = i+1; j < 10; j++){
            if(strcmp(element[i], element[j]) > 0){
                // Swap String
                strcpy(temp, element[i]);
                strcpy(element[i], element[j]);
                strcpy(element[j], temp);
            }
        }
    }

    printf("\n\nLexical Order: \n");
    for(i = 0; i < 10; i++){
        printf("\n%s", element[i]);
    }

    printf("\n");
    return 0;

}
