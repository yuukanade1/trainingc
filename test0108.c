#include <stdio.h>

int main(void)
{
    int n1, n2;
    int sk;

    puts("まず、整数を2つ入力してください。");
    printf("1つ目:");   scanf("%d", &n1);    
    printf("2つ目:");   scanf("%d", &n2);

    sk = n1 * n2;
    printf("入力した2つの整数の積は%dです。\n", sk);

    return 0;
}