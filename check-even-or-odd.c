#include<stdio.h>

int main(){
    int inp;

    printf("Enter Number: ");
    scanf("%d", &inp);

    if(inp % 2 == 0){
        printf("This Number is Even");
    }else{
        printf("This Number is Odd");
    }

    printf("\n");
    return 0;
}
