#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string alpha = "abcdefghijklmnopqrstuvwxyz";

char rotate(char c, string argv[]);

int main(int argc, string argv[])
{
    if (argc != 2) // Se a quantidade de argumentos forem inválidas.
    {
        printf("Usage: ./substituition key\n");
        return 1;
    }

    if (strlen(argv[1]) != 26) // Caso a chave não possua a quantidade correta de caracteres.
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++) // Verificando se todos os caracteres da chave são alfabéticos
    {
        if (argv[1][i] < 'A' || (argv[1][i] > 'Z' && argv[1][i] < 'a') || argv[1][i] > 'z')
        {
            printf("Key must contain only characters\n");
            return 1;
        }
        argv[1][i] = tolower(argv[1][i]); // Colocando a chave toda em minuscula

        for (int j = 0; j < strlen(argv[1]); j++) // Verificando se tem caracteres duplicados
        {
            if (tolower(argv[1][i]) == tolower(argv[1][j]) && i != j)
            {
                printf("Duplicate character in key\n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext:  "); // recebendo o texto para ser cifrado

    printf("ciphertext: ");
    for (int i = 0; i < strlen(plaintext); i++) // Cifrando cada caracter
    {
        rotate(plaintext[i], argv);
    }
    printf("\n");
    return 0;
}

char rotate(char c, string argv[]) // Função que cifra cada caractere
{
    int upper = 0;
    if (isupper(c)) // Guardando a informação se é maiusculo ou não
    {
        upper = 1;
    }

    if (isalpha(c)) // Se for uma letra, cifrar, caso contrario só imprimir ela
    {
        for (int i = 0; i < strlen(alpha); i++)
        {
            if (tolower(c) == alpha[i])
            {
                if (upper == 1) // Se o caracter for maiusculo
                {
                    printf("%c", toupper(argv[1][i]));
                    return toupper(argv[1][i]);
                }

                else // Se for minusculo
                {
                    printf("%c", tolower(argv[1][i]));
                    return tolower(argv[1][i]);
                }
            }
        }
    }
    printf("%c", c); // Caso não seja uma letra
    return c;
}