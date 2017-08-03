#include<stdio.h>

int main(){
    char inp;

    printf("Enter a Character: ");
    scanf("%c", &inp);

    if((inp >= 'a' && inp <= 'z') || (inp >= 'A' && inp <= 'Z')){
        printf("This in an Alphabet.");
    }else{
        printf("This in NOT an Alphabet.");
    }


    printf("\n");
    return 0;
}
