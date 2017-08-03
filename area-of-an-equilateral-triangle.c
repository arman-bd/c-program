#include<stdio.h>
#include<math.h>

int main(){
    int side;
    float area;

    printf("Side: ");
    scanf("%d", &side);

    area = (sqrt(3) / 4)*(side*side);
    printf("Area: %.2f", area);

    printf("\n");
    return 0;
}
