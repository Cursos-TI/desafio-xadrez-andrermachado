#include <stdio.h>

/* Desafio de Xadrez - MateCheck
   Versão avançada com recursividade e loops complexos.
   Este programa simula os movimentos da Torre, Bispo, Rainha e Cavalo
   usando funções recursivas e estrutura de repetição mais elaborada. */

/* Função recursiva para o movimento da Torre.
   A Torre se move somente para a direita, imprimindo "Direita" a cada casa. */
void moverTorre(int passos) {
    if (passos <= 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(passos - 1);
}

/* Função recursiva para o movimento do Bispo.
   O Bispo se move em diagonal para cima e para a direita.
   Aqui usamos loops aninhados: o loop mais externo representa o movimento vertical
   e o interno representa o movimento horizontal para cada passo diagonal. */
void moverBispo(int passos) {
    if (passos <= 0) {
        return;
    }

    int vertical;
    for (vertical = 0; vertical < 1; vertical++) {
        int horizontal;
        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(passos - 1);
}

/* Função recursiva para o movimento da Rainha.
   A Rainha se move para a esquerda, imprimindo "Esquerda" a cada casa. */
void moverRainha(int passos) {
    if (passos <= 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(passos - 1);
}

/* Função para o movimento do Cavalo com loops aninhados e condições.
   O Cavalo se move em L: duas casas para cima e uma para a direita.
   Utilizamos um loop externo com variáveis múltiplas e um loop interno para
   controlar o fluxo, além de continue e break para ajustar a execução. */
void moverCavalo(int cima, int direita) {
    int linha = 0;
    int coluna = 0;

    for (; linha < cima || coluna < direita; ) {
        int controleInterno = 0;

        while (controleInterno < 1) {
            if (linha < cima) {
                printf("Cima\n");
                linha++;
                controleInterno++;
                continue;
            }

            if (coluna < direita) {
                printf("Direita\n");
                coluna++;
                controleInterno++;
                continue;
            }

            break;
        }
    }
}

int main() {
    /* Valores definidos diretamente no código, conforme o requisito do desafio. */
    int torre_passos = 5;
    int bispo_passos = 5;
    int rainha_passos = 8;
    int cavalo_cima = 2;
    int cavalo_direita = 1;

    /* --- Torre ------------------------------------------------------------- */
    printf("Torre: movendo %d casas para a direita\n", torre_passos);
    moverTorre(torre_passos);
    printf("\n");

    /* --- Bispo ------------------------------------------------------------- */
    printf("Bispo: movendo %d casas na diagonal cima-direita\n", bispo_passos);
    moverBispo(bispo_passos);
    printf("\n");

    /* --- Rainha ------------------------------------------------------------ */
    printf("Rainha: movendo %d casas para a esquerda\n", rainha_passos);
    moverRainha(rainha_passos);
    printf("\n");

    /* --- Cavalo ------------------------------------------------------------- */
    printf("Cavalo: movendo em L (2 casas cima, 1 casa direita)\n");
    moverCavalo(cavalo_cima, cavalo_direita);

    return 0;
}
