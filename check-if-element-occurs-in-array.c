#include<stdio.h>

int main(){
    int i, query, found = 0, elements[10] = {1, 5, 66, 21, 25, 70, 44, 62, 28, 6};

    printf("Search Element: ");
    scanf("%d", &query);

    for(i = 0; i < 10; i++){
        if(elements[i] == query){
            found = 1;
            break;
        }
    }

    if(found == 1){
        printf("Element Found");
    }else{
        printf("Element Not Found");
    }

    printf("\n");
    return 0;
}
