#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char entrada[100], normal[100], invertido[100], c;
    int i, tam;

    printf(" Palavra ou frase: ");
    scanf("%99[^\n]", entrada);

    tam = 0; //Tamanho = numero de letras na frase
    for (i = 0; entrada[i] != '\0'; i++)
    {
        c = toupper(entrada[i]); //Converte para maiúsculo (se for letra)
        if (c >= 'A' && c <= 'Z')
        {                    //Se for uma letra
            normal[tam] = c; //Copia a letra para o vetor normal
            tam++;           //Incrementa contador de letras = tamanho
        }
    }
    normal[tam] = '\0'; //Coloca caractere nulo para indicar fim da string

    //Inverte a frase inteira
    for (i = 0; i < tam; i++)
        invertido[tam - i - 1] = normal[i];
    invertido[tam] = '\0'; //Coloca caractere nulo para indicar fim da string

    printf(" Normal    -> %s\n Invertido -> %s\n", normal, invertido);

    if (strcmp(normal, invertido) == 0)
        printf(" E' palindromo!\n");
    else
        printf(" Nao e' palindromo!\n");

    return 0;
}