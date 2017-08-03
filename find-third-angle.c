#include<stdio.h>

int main(){
    int angle1, angle2, angle3;

    printf("First Angle: ");
    scanf("%d", &angle1);

    printf("Second Angle: ");
    scanf("%d", &angle2);

    angle3 = 180 - (angle1 + angle2);
    printf("Third Angle: %d", angle3);

    printf("\n");
    return 0;
}
