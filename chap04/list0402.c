#include <stdio.h>

int main(void)
{
    int hand;

    do {
        printf("何を出す？ [0 … グー / 1 … チョキ / 2 … パー] :");
        scanf("%d", &hand);
    } while (hand < 0 || hand > 2);
    printf("あなたは");
    switch (hand) {
      case 0 : printf("グー");    break;
      case 1 : printf("チョキ");  break;
      case 2 : printf("パー");    break;
    }
    printf("を出します。\n");

    return 0;
}