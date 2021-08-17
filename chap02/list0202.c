#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力:");
    scanf("%d", &no);

    printf("最も下の行は%dです。\n", no % 10);

    return 0;
}