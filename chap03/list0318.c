#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力 :");
    scanf("%d", &no);

    if (no % 3 == 0)
        puts("その数は3で割り切れます。");
    else if (no % 3 == 1)
        puts("その数は3で割った余剰は1です。");
    else
        puts("その数は3で割った余剰は2です。");

    return 0;
}