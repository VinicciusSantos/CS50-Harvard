#include <stdio.h>
#include <cs50.h>

int main(void){
    int num;

    // Recebendo a quantidade de linhas da pirâmide
    do {
        num = get_int("Height: ");
    } while (num < 1 || num > 8);

    for (int i = 1; i <= num; i++){
        // Imprimindo os espaços
        for (int j = 1; j <= num-i; j++)
            printf(" ");

        // Imprimindo as Hashtags
        for (int k = 1; k <= i; k++)
            printf("#");

        // Quebra de linha
        printf("\n");
    }
}
