#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, c;
    int sum;

    printf("Введите номер игрока A: ");
    scanf("%d", &a);
    printf("Введите номер игрока B: ");
    scanf("%d", &b);
    printf("Введите номер игрока C: ");
    scanf("%d", &c);

    sum = a + b + c;

    if (sum % 3 == 0) {
        printf("Тройка счастливая! Сумма номеров (%d) делится на 3 без остатка.\n", sum);
    }
    else {
        printf("Тройка обычная. Сумма номеров (%d) не делится на 3 без остатка.\n", sum);
    }

    return 0;
}