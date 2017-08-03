#include<stdio.h>
#include<string.h>

int main(){
    char inp[100], rev[100];
    int i = 0, j = 0, len = 0;

    // Get Input
    printf("Input: ");
    scanf("%s", &inp);

    // Reverse
    len = strlen(inp);
    for(i = len-1; i > -1; i--){
        rev[j] = inp[i];
        j++;
    }

    if(memcmp(inp, rev, len) == 0){ // For String Comparing
        printf("This Word is Palindrome");
    }else{
        printf("This Word in NOT Palindrome");
    }

    printf("\n");
    return 0;
}
