#include<stdio.h>
#include<math.h>

int main(){
    int inp;
    float sqr;

    printf("Enter Number: ");
    scanf("%d", &inp);

    sqr = sqrt(inp);
    printf("Square Root: %.4f", sqr);

    printf("\n");
    return 0;
}
