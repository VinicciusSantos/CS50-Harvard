#include <stdio.h>
#include <math.h>
#include <cs50.h>

int getNum(int num, int pos, int quant)
{
    int pos_d = quant - pos + 1;
    int digit;
    do
    {
        digit = num % pow(10, pos_d);
    }
    while ()
    return 0;
}

int main(void)
{
    long int num;
    do
    {
        num = get_long("Num: ");
    }
    while (num < 0);

    // Contando a quantidade de dígitos:
    int quant = 0;
    while (true)
    {
        if (num / pow(10, quant) >= 1)
        {
            quant++;
        }
        else
        {
            break;
        }
    }

    // Se ps números forem diferentes do padrão (13, 15 ou 16 dígitos):
    if (quant != 13 && quant != 15 && quant != 16)
    {
        printf("INVALID\n");
    }
    else
    {
        int soma_normal = 0, soma_dobrada = 0, normal = 1;
        for (int i = quant; i >= 0; i--)
        {
            if (normal == 1) // Casos que faremos a soma dos normais
            {
                getNum(num, i, quant);
                normal = 0;
            }
            else // Caso que faremos os casos que multiplicamos
            {
                getNum(num, i, quant)
                normal = 1;
            }
        }
    }
}
