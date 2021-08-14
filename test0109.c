#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    int wa;

    puts("3つの整数を入力してください。");
    printf("整数1:");   scanf("%d", &n1);
    printf("整数2:");   scanf("%d", &n2);
    printf("整数3:");   scanf("%d", &n3);

    wa = n1 + n2 + n3;

    printf("3つの整数の和は%dです。\n", wa);

    return 0;
}