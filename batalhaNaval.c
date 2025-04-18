#include <stdio.h>

int main()
{
    int linha, linha2, linha3, linha4, coluna, coluna2, coluna3, coluna4, losangoLinha, losangoColuna, cruzLinha, cruzColuna, coneLinha,coneColuna;
    int tabuleiro[10][10];


    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    
    linha = 1, coluna = 1;

    for (int i = -1; i <= 1; i++)
    {
        tabuleiro[linha - 1][coluna + i] = 3;
    }

    
    linha2 = 3, coluna2 = 3;

    for (int i = -1; i <= 1; i++)
    {
        tabuleiro[linha2 + i][coluna2 - 1] = 3;
    }

    
    linha3 = 5, coluna3 = 5;

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha3 + i][coluna3 + i] = 3;
    }

    
    linha4 = 7, coluna4 = 7;

    for (int i = -1; i < 2; i++)
    {
        tabuleiro[linha4 + i][coluna4 - i] = 3;
    }


    //cruz
    printf("qual linha posicionar o centro da cruz? \n");
    scanf("%d", &cruzLinha);
    printf("qual coluna posicionar o centro da cruz? \n");
    scanf("%d", &cruzColuna);
    
    
    for(int k = - 1; k < 4; k++)
    {
    tabuleiro[cruzLinha - 1][cruzColuna - k] = 1;    
    }
    tabuleiro[cruzLinha - 2][cruzColuna - 1] = 1;
    tabuleiro[cruzLinha][cruzColuna - 1] = 1;

    

    //cone
    printf("qual linha posicionar o topo do cone? \n");
    scanf("%d", &coneLinha);
    printf("qual coluna posicionar o topo do cone? \n");
    scanf("%d", &coneColuna);
    
    for (int k = -2; k < 3; k++)
    {
    
       for (int l = -k; l <= k; l++)
        {
            tabuleiro[coneLinha + k - 1][coneColuna + l - 1] = 1;
        }


    }



     //octaedro:
     printf("qual linha posicionar o centro do losango? \n");
     scanf("%d", &losangoLinha);
     printf("qual coluna posicionar o centro do losango? \n");
     scanf("%d", &losangoColuna);
    
     for(int k = 0; k < 3; k++)
     {
     tabuleiro[losangoLinha - 1][losangoColuna - k] = 1;    
     }
     tabuleiro[losangoLinha - 2][losangoColuna - 1] = 1;
     tabuleiro[losangoLinha][losangoColuna - 1] = 1;


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
