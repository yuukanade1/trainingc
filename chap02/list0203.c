#include <stdio.h>

int main(void)
{
    int a, b;

    puts("2つの整数を入力。");
    printf("整数a:");   scanf("%d", &a);
    printf("整数b:");   scanf("%d", &b);

    printf("aをbで割ると%dあまり%dです。\n", a / b, a % b);

    return 0;
}