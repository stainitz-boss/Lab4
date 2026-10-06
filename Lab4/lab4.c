#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    int a, b, c;
    int sum, res;

    printf("Введите номер игрока A: ");
    scanf("%d", &a);
    printf("Введите номер игрока B: ");
    scanf("%d", &b);
    printf("Введите номер игрока C: ");
    scanf("%d", &c);

    sum = a + b + c;
    res = (sum % 3 == 0);
    printf("Тройка счастливая? (1 - да, 0 - нет): %d\n", res);

    return 0;
}
