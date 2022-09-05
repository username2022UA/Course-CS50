#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    int change;
    do
    {
        change = round (get_float("Cколько сдачи нужно выдать:\n") * 100); // переводим в центы и округляем
    }
    while (change <= 0);
    int a;
    int b;
    int c;
    int d;
    if (change >= 25)
    {
        a = change / 25; // колличество монет 25ц
        change %= 25; // остаток от деления определяем как change
    }
    else
    a = 0;
    if (change < 25 | change >= 10) //
    {
        b = change / 10; // колличество монет 10ц
        change %= 10; // остаток от деления определяем как change
    }
    else
    b = 0;
    if (change < 10 | change >= 5)
    {
        c = change / 5; // колличество монет 5ц
        change %= 5; // остаток от деления определяем как change
    }
    else
    c = 0;
    if (change < 5 | change >=1)
    {
        d = change / 1; // колличество монет 1ц
    }
    else
    d = 0;
    int x;
    x = a + b + c + d; // общее колличество монет
    printf("%i\n", x);
    return 0;
}
