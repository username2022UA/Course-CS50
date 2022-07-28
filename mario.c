#include<stdio.h>
#include<cs50.h>
int main (void)
{
    while (true)
    {
        int h = get_int("Задайте высоту пирамиды от 0 до 23: ");

        while ((h < 1) || (h > 23))
        {
            h = get_int("Введите положительное число от 0 жо 23: ");
        }
        for (int x = 0; x < h; x++)
        {
            for (int y = 0; y < h - x - 1; y++)
            {
               printf(" ");
            }
            for (int z = 0; z < x + 2; z++)
            {
                printf("#");
            }
            printf(" ");
            for (int c = 0; c < x + 2; c++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}