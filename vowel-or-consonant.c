#include<stdio.h>

int main(){
    char inp;

    printf("Enter a Character: ");
    scanf("%c", &inp);

    if((inp >= 'a' && inp <= 'z') || (inp >= 'A' && inp <= 'Z')){
        if(inp == 'a' || inp == 'e' || inp == 'i' || inp == 'o' || inp == 'u' ||
           inp == 'A' || inp == 'E' || inp == 'I' || inp == 'O' || inp == 'U'){
            printf("This Character is Vowel");
        }else{
            printf("This Character is Consonant");
        }
    }else{
        printf("This in NOT an Alphabet");
    }


    printf("\n");
    return 0;
}
