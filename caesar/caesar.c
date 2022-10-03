#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotate(char c, int n);

int main(int argc, string argv[])
{
    if (argc != 2) // Se a quantidade de argumentos fornecidas for errada
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


    for (int i = 0; i < strlen(argv[1]); i++) // Percorrendo o argumento pra ver se é um número
    {
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int key = atoi(argv[1]);

    if (key < 0) // Se for número negativo
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plaintext = get_string("plaintext:  ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plaintext); i++) // Rotacionando cada letra da palabvra
    {
        rotate(plaintext[i], key);
    }
    printf("\n");
    return 0;

}

char rotate(char c, int n)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {

        while (n >= 26) // Reduzindo a chave para um número menor que 26
        {
            n -= 26;
        }

        int pos = (int)c + n;

        if ((c >= 'a' && c <= 'z' && pos > 122) || (c >= 'A' && c <= 'Z' && pos > 90))
        {
            pos -= 26; // Se a chave ultrapassar o alfabeto, voltar para o inicio
        }

        printf("%c", (char)pos);
        return c;
    }

    printf("%c", c);
    return c;
}