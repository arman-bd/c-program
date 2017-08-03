#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i = 0, j = 0, k = 0;
    char *str1, *str2, *str3, buffer;

    // Get First String
    printf("Enter First String: ");
    str1 = malloc(1);
    while(buffer = getchar()){
        if(buffer == '\n' || buffer == EOF){
            break;
        }else{
            str1[i] = buffer;
            i++;
            str1 = realloc(str1, i+1);
        }
    }



    // Get Second String
    printf("\nEnter First String: ");
    str2 = malloc(1);
    while(buffer = getchar()){
        if(buffer == '\n' || buffer == EOF){
            break;
        }else{
            str2[j] = buffer;
            j++;
            str2 = realloc(str2, i+1);
        }
    }



    // Concatenate String
    str3 = malloc(i+j+1);

    strcat(str3, str1);
    strcat(str3, str2);

    printf("\nString[1]: %s", str1);
    printf("\nString[2]: %s", str2);
    printf("\nString Concatenate: %s", str3);
    printf("\nLength: %d", i+j);

    free(str1);
    free(str2);
    free(str3);

    printf("\n");
    return 0;
}


