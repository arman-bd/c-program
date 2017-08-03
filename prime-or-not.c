#include<stdio.h>
#include<math.h>

int isPrime(int num);

int main(){
    int inp;

    printf("Number: ");
    scanf("%d", &inp);

    if(isPrime(inp) == 1){
        printf("This Number is Prime");
    }else{
        printf("This Number is NOT Prime");
    }

    printf("\n");
    return 0;
}

int isPrime(int num){
    int i, prime = 1;

    if(num == 0 || num == 1){
        prime = 0;
        return prime;
    }
    if(num == 2){
        prime = 1;
        return prime;
    }

    for(i = 2; i < ceil(num / 2) + 1; i++){

        if(i > 2 && i % 2 == 0){
            continue; // Avoid Even Numbers
        }

        if(num % i == 0){
            prime = 0;
            break;
        }
    }

    return prime;
}
