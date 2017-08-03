#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;
    char *str, buffer;

    printf("Enter String: ");

    str = malloc(1);
    while(buffer = getchar()){
        if(buffer == '\n' || buffer == EOF){
            break;
        }else{
            str[i] = buffer;
            i++;
            str = realloc(str, i+1);
        }
    }

    printf("\nString: %s", str);
    printf("\nLength: %d", i);

    free(str);
    printf("\n");
    return 0;
}
