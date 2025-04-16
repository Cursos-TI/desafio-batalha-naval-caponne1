#include <stdio.h>

int main()
{
    int linha, linha2, linha3, linha4, coluna, coluna2, coluna3, coluna4;
    int tabuleiro[10][10];


    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    
    printf("Digite a linha do navio na horizontal: \n");
    scanf("%d", &linha);
    printf("Digite a coluna central do navio na horizontal: \n");
    scanf("%d", &coluna);

    for (int i = -1; i <= 1; i++)
    {
        tabuleiro[linha - 1][coluna + i] = 3;
    }

    
    printf("Digite a linha central do navio na vertical: \n");
    scanf("%d", &linha2);
    printf("Digite a coluna do navio na vertical: \n");
    scanf("%d", &coluna2);

    for (int i = -1; i <= 1; i++)
    {
        tabuleiro[linha2 + i][coluna2 - 1] = 3;
    }

    
    printf("Digite a linha inicial do navio 1 em diagonal : \n");
    scanf("%d", &linha3);
    printf("Digite a coluna inicial do navio 1 em diagonal : \n");
    scanf("%d", &coluna3);

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha3 + i][coluna3 + i] = 3;
    }

    
    printf("Digite a linha inicial do navio 2 em diagonal : \n");
    scanf("%d", &linha4);
    printf("Digite a coluna inicial do navio 2 em diagonal : \n");
    scanf("%d", &coluna4);

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha4 + i][coluna4 - i] = 3;
    }

    // Mostra o tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
