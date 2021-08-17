#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください。:");
    scanf("%d", &no);

    printf("5倍にすると%dです。\n", 5 * no);

    return 0;
}