#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    // 1. Inicializar tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ===== Cone (1) no topo (coluna central = 4) =====
    tabuleiro[0][4] = 1; 
    tabuleiro[1][3] = 1; tabuleiro[1][4] = 1; tabuleiro[1][5] = 1;
    tabuleiro[2][2] = 1; tabuleiro[2][3] = 1; tabuleiro[2][4] = 1; tabuleiro[2][5] = 1; tabuleiro[2][6] = 1;

    // ===== Cruz (2) na parte de baixo à esquerda =====
    // Centro da cruz em (7,2)
    tabuleiro[7][2] = 2; 
    tabuleiro[6][2] = 2; tabuleiro[8][2] = 2; 
    tabuleiro[7][0] = 2; tabuleiro[7][1] = 2; tabuleiro[7][3] = 2; tabuleiro[7][4] = 2;

    // ===== Octaedro (3) na parte de baixo à direita =====
    // Centro em (7,7)
    tabuleiro[6][7] = 3;
    tabuleiro[7][6] = 3; tabuleiro[7][7] = 3; tabuleiro[7][8] = 3;
    tabuleiro[8][7] = 3;

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
