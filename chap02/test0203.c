#include <stdio.h>

int main(void)
{
    double x;
    x = 9.99;

    printf("実数を入力。:");    scanf("%lf", &x);
    printf("%fと入力しました。\n", x); 

    return 0;
}