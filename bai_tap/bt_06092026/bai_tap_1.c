#include <stdio.h>

int main()
{
    float PI = 3.1416;
    float circleRadius, S, C;

    printf("Hay nhap ban kinh hinh tron: ");
    scanf("%f", &circleRadius);
    S = PI * circleRadius * circleRadius;
    C = 2.f * PI * circleRadius;

    printf("Chu vi cua hinh tron la: %.2f \n", C);
    printf("Dien tich cua hinh tron la: %.2f \n", S);

    return 0;
}
