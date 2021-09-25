#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("人数を入力 : ");

    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a1~%dで入力してください : ", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("%d人の点数を入力してください。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d番 : ", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a1~100で入力してください : ");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    
}