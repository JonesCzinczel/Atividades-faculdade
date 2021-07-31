#include <stdio.h>
#include <conio.h>

void merge2way()
{
    int a[50], b[50], c[100], elementosA, elementosB, i, j, elementosC, tempo;
    printf("Digite quantos elementos o  vetor A tera: ");
    scanf("%d", &elementosA);

    printf("Digite quantos elementos o vetor B tera: ");
    scanf("%d", &elementosB);
    putchar('\n');

    printf("Digite os %d elementos do array A: ", elementosA);

    for (i = 0; i < elementosA; i++)
        scanf("%d", &a[i]);
    printf("Digite os %d elementos do array B: ", elementosB);

    for (i = 0; i < elementosB; i++)
        scanf("%d", &b[i]);
    printf("\nElementos do array A: ");

    for (i = 0; i < elementosA; i++)
    {
        if (i == (elementosA - 1))
            printf("%d", a[i]);
        else
            printf("%d, ", a[i]);
    }

    printf("\n\nElementos do array B: ");
    for (i = 0; i < elementosB; i++)
    {
        if (i == (elementosB - 1))
            printf("%d", b[i]);
        else
            printf("%d, ", b[i]);
    }

    for (i = 0; i < elementosA; i++)
    {
        c[i] = a[i];
    }
    for (j = 0; j < elementosB; j++)
    {
        c[i] = b[j];
        i++;
    }
    elementosC = i;

    for (j = 0; j < (elementosC - 1); j++)
    {
        for (i = 0; i < (elementosC - 1); i++)
        {
            if (c[i] > c[i + 1])
            {
                tempo = c[i];
                c[i] = c[i + 1];
                c[i + 1] = tempo;
            }
        }
    }

    printf("\n\nA soma do array A e B  resulta no array C.");
    printf("\nElementos do Array C: ");
    for (i = 0; i < elementosC; i++)
    {
        if (i == (elementosC - 1))
            printf("%d", c[i]);
        else
            printf("%d, ", c[i]);
    }
}

int main()
{
    merge2way();
}