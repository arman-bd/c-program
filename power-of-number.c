#include<stdio.h>
#include<math.h>

int main(){
    float number, power;

    printf("Number: ");
    scanf("%f", &number);

    printf("Power: ");
    scanf("%f", &power);

    printf("Power of Number: %.4lf", pow(number, power));

    printf("\n");
    return 0;
}
