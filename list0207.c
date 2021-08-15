#include <stdio.h>

int main(void)
{
    double vx, vy;

    puts("2つの実数を入力。");
    printf("実数vx:");    scanf("%lf", &vx);
    printf("実数vy:");    scanf("%lf", &vy);

    printf("vx + vy = %f\n", vx + vy);
    printf("vx - vy = %f\n", vx - vy);
    printf("vx * vy = %f\n", vx * vy);
    printf("vx / vy = %f\n", vx / vy);

    return 0;
}