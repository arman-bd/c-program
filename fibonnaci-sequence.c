#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, n;
    unsigned long long *fib;

    printf("Enter Range: ");
    scanf("%d", &n);

    if(n > 92){
        printf("Range Too Long, Maximum Set To 92\n");
        n = 92;
    }

    fib = malloc(n*sizeof(unsigned long long));

    // Calculate Fibonacci
    for(i = 0; i <= n; i++){
        if(i == 0){
            fib[i] = 0;
        }else if(i == 1){
            fib[i] = 1;
        }else{
            fib[i] = fib[i-1] + fib[i-2];
        }

        printf("[%d]  %lld\n", i, fib[i]);
    }

    return 0;
}
