#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int size = strlen(text);

    int lettercount = 0;
    int wordscount = 0;
    int sentencescount = 0;

    for (int i = 0; i < size; i++)
    {
        if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
        {
            lettercount++; // Contando o número de letras
        }

        else if (text[i] == 32)
        {
            wordscount++; // Contandoo número de espaços
        }

        else if (text[i] == 33 || text[i] == 46 || text[i] == 63)
        {
            sentencescount++; // Contando o número de "?", "!" e "."
        }
    }

    wordscount++;

    float L = (float)lettercount / wordscount * 100.0;        // Letras por 100 palavras
    float S = (float)sentencescount / wordscount * 100.0;     // Média de Frases por 100 palavras

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index - (int)index >= 0.5)
    {
        index++;
    }

    else
    {
        index = (int)index;
    }

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else if (index > 1)
    {
        printf("Grade %i\n", (int)index);
    }

    else
    {
        printf("Before Grade 1\n");
    }
}
