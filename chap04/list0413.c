#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;
    int num tmp;

    printf("整数は何個？:");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d : ", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合計値 : %d\n", sum);
    printf("平均値 : %.2f\n", (duble)sum / num);

    return 0;
}