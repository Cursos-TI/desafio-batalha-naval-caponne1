#include <stdio.h>


int main()
{
    int linha, linha2, coluna, coluna2;
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    printf("digite a linha do navio 1: \n");
    scanf("%d",&linha);
    printf("digite a coluna do navio 1: \n");
    scanf("%d",&coluna);

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha - 1][ coluna + i] = 3;
    }

    printf("digite a linha do navio 2: \n");
    scanf("%d",&linha2);
    printf("digite a coluna do navio 2: \n");
    scanf("%d",&coluna2);

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha2 + i][ coluna2 - 1] = 3;
    }


    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
    }
    





}