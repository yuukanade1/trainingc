#include <stdio.h>

int main(void)
{
    int a, b;

    puts("2つの整数を入力。");
    printf("整数a:");   scanf("%d", &a);
    printf("整数b:");   scanf("%d", &b);

    printf("それらの平均は%dです。\n", (a + b) / 2);

    return 0;
}