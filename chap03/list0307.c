#include <stdio.h>

int main(void)
{
    int n1, n2;
    
    puts("2つの整数を入力。");
    printf("整数1:");   scanf("%d", &n1);
    printf("整数2:");   scanf("%d", &n2);

    if (n1 != n2)
        puts("それらの値は違います。");
    else
        puts("それらの値は同じです。");
    
    return 0;
}