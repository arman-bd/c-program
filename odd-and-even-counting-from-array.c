#include<stdio.h>

int main(){
    int i, odd = 0, even = 0, numbers[10] = {1, 5, 66, 21, 25, 70, 44, 62, 28, 6};

    for(i = 0; i < 10; i++){
        if(numbers[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    printf("Odd: %d, Even: %d\n", odd, even);
    return 0;
}
