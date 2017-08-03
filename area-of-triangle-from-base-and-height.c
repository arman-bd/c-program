#include<stdio.h>

int main(){
    int base, height, area;

    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    area = (height * base) / 2;
    printf("Area: %d", area);

    printf("\n");
    return 0;
}
