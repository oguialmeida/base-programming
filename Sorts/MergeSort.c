#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 30

void imprimirVetor(int vetor2[], int tamanho);
void Intercala(int p, int q, int r, int v[]);
void mergeSort(int p, int r, int v[]);

int i, vetor[TAM], vetor2[TAM], tamanho;
static int ntrocas = 0;

int main()
{
    srand(time(NULL));

    printf("Vetor aleatorio:\n");

    for (i = 0; i < 30; i++)
    {
        vetor[i] = rand() % 1000;

        printf("%d ", vetor[i]);
        vetor2[i] = vetor[i];
    }

    imprimirVetor(vetor2, tamanho);

    return 0;
}

void imprimirVetor(int vetor2[], int tamanho)
{
    tamanho = 30;

    printf("\n\nVetor ordenado com o Merge:\n");

    for (i = 0; i < tamanho; i++)
    {
        mergeSort(0, tamanho, vetor2);
        printf("%d ", vetor2[i]);
    }
    printf("\nNumero de trocas: %d", ntrocas);
    printf("\n\n");
}

void Intercala(int p, int q, int r, int v[])
{
    int i, j, k, *w;

    w = malloc((r - p) * sizeof(int));
    i = p;
    j = q;
    k = 0;

    while (i < q && j < r)
    {
        if (v[i] <= v[j])
            w[k++] = v[i++];
        else
            w[k++] = v[j++];
        ntrocas++;
    }

    while (i < q)
        w[k++] = v[i++];

    while (i < q)
        w[k++] = v[i++];

    while (j < r)
        w[k++] = v[j++];

    for (i = p; i < r; i++)
        v[i] = w[i - p];
    free(w);
}

void mergeSort(int p, int r, int v[])
{
    if (p < r - 1)
    {
        int q = (p + r) / 2;
        mergeSort(p, q, v);
        mergeSort(q, r, v);
        Intercala(p, q, r, v);
    }
}
