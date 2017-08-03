#include<stdio.h>

int main(){
    int i;
    char source[100] = "Hello World", dest[100];

    for(i = 0; i < 100; i++){
        if(source[i] != EOF){
            dest[i] = source[i];
        }else{
            break;
        }
    }

    printf("Source String: %s", source);
    printf("\nCopied String: %s", dest);

    printf("\n\n");
    return 0;
}
