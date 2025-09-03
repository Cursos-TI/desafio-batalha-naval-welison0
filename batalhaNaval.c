#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    // 1. Inicializar tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    //navio 1- linha 3, coluna e,f,g.
    for(int j = 4; j <= 6; j++){
        tabuleiro[2][j] = 3;
    }

    //navio 2- coluna H, linha 6,7,8.
    for(int i = 5; i <= 7; i++){
        tabuleiro[i][7] = 3;
    }
     //navio 3, diagonal
    for(int k = 0; k < 4; k++){
        tabuleiro[4+k][3+k] = 3;
    }

    //navio 4, diagonal
    for(int k = 0; k < 3; k++){
        tabuleiro[1+k][1+k] = 3;
    }
     
    printf("\n");

    // 2. Exibir tabuleiro
    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");
    for(int j = 0; j < 10; j++){
        printf("%c ", linha[j]); // letras das colunas
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
       if(i+1 < 10)
       printf(" %d ", i+1);
       else
       printf("%d", i+1);

       for(int j = 0; j < 10; j++){
        printf("%d ", tabuleiro[i][j]);
       }
       printf("\n");
    }

    return 0;
}