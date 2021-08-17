#include <stdio.h>

int main(void)
{
    int x, y, z;

    puts("2つの整数を入力。");
    printf("整数x:");   scanf("%d", &x);
    printf("整数y:");   scanf("%d", &y);

    z = x * 100 / y;

    printf("xの値はyの%d%%です。\n", z);
    
    return 0;

}