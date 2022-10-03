#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int num;
    do
    {
        num = get_int("Height: ");
    }
    while (num < 1 || num > 8);

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= num - i; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");

        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
