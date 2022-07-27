#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int a = get_int ("Сколько минут вы проводите в душе?: ");
    int b = a * 12;
    printf ("За это время вы тратите %d бутылок воды!\n", b);
}
