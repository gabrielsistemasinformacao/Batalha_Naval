#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
     char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
     int posicaoletra = 0;

     int tabuleiro [10] [10];
     

     for (int i = 0; i < 10; i++)
     {
        for (int y = 0; y < 10; y++)
        {
            tabuleiro[i][y] = 0;
        }    
    }

    char letra;
    do
    {
        printf("Escolha de A a J: ");
        scanf("%c", &letra);
    } while (!((letra >= 'A') && (letra <= 'J')));
    int posicaonumero;
    do
    {
        printf("Escolha de 1 a 10: ");
        scanf("%i", &posicaonumero);
    } while ((posicaonumero < 1 || posicaonumero > 10));

    int posicao;
    do
    {
        printf("Escolha posição: 1 para horizontal   2 para vertical");
        scanf("%i", &posicao);
    } while (((posicao != 1) && (posicao != 2)));


    while (posicaoletra<10)
    {
        if (letras[posicaoletra] == letra)
        {
            break;
        }
        posicaoletra++;
    }
    
    if (posicao == 2)
    for (int i = posicaonumero-1; i < (posicaonumero-1)+3; i++)
    {
        tabuleiro[i][posicaoletra] = 3;
    }
    else if (posicao == 1)
    for (int i = posicaonumero-1; i < (posicaonumero-1)+3; i++)
    {
        tabuleiro[posicaoletra][i] = 3;
    }


    
    char letrad;
    
    
    
    
    printf("Escolha de A a J Diagonal: ");
    do
    {
        scanf("%c", &letrad);
    } while (!((letrad >= 'A') && (letrad <= 'J')));
    
    do
    {
        printf("Escolha de 1 a 10: ");
        scanf("%i", &posicaonumero);
    } while ((posicaonumero < 1 || posicaonumero > 10));

    
    do
    {
        printf("Escolha posição: 1 para Diagonal Direita   2 para Diagonal Esquerda");
        scanf("%i", &posicao);
    } while (((posicao != 1) && (posicao != 2)));

    posicaoletra = 0;
    while (posicaoletra<10)
    {
        if (letras[posicaoletra] == letrad)
        {
            break;
        }
        posicaoletra++;
    }
    int posdialetra = 0;
    if (posicao == 2)
    for (int i = posicaonumero-1; i < (posicaonumero-1)+3; i++)
    {
        tabuleiro[i][posicaoletra + posdialetra] = 3;
        posdialetra --;
    
    }
    else if (posicao == 1)
    for (int i = posicaonumero-1; i < (posicaonumero-1)+3; i++)
    {
        tabuleiro[i][posicaoletra + posdialetra] = 3;
        posdialetra ++;        
    }
 
    
    
    printf("     ");
     for (int i = 0; i < 10; i++)
     {
        printf("%c ", letras[i]);
     }
     printf("\n");
    for (int i = 0; i < 10; i++)
     {
        if (i == 9)
            printf("%i   ",i+1);
        else
            printf("%i    ",i+1);
            
        for (int y = 0; y < 10; y++)
        {
            printf("%i ",tabuleiro[i][y]);
        }    
        printf("\n");
    }
     
      



    return 0;
}
