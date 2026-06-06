#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    /*
     * Nível Novato - Movimentação das Peças
     * Requisitos:
     * - Torre: 5 casas para a direita (usa `for`)
     * - Bispo: 5 casas na diagonal cima-direita (usa `while`)
     * - Rainha: 8 casas para a esquerda (usa `do-while`)
     * Valores definidos em variáveis inteiras conforme solicitado.
     */

    /* Número de casas a mover para cada peça (definidos aqui, sem entrada do usuário) */
    int torre_passos = 5;
    int bispo_passos = 5;
    int rainha_passos = 8;

    int i; /* contador usado nas estruturas de repetição (inteiro conforme requisito) */

    /* --- Torre (movimenta-se em linha reta) --------------------------------- */
    /* Usamos um loop `for` para simular a Torre movendo `torre_passos` casas para a direita. */
    printf("Torre: movendo %d casas para a direita\n", torre_passos);
    for (i = 1; i <= torre_passos; i++) {
        /* Para cada casa percorrida, imprimimos a direção: Direita */
        printf("Direita\n");
    }

    /* --- Bispo (movimenta-se na diagonal) ---------------------------------- */
    /* Usamos um loop `while` para simular o Bispo movendo `bispo_passos` casas
       na diagonal para cima e à direita. A cada casa imprimimos a combinação
       das duas direções: "Cima, Direita". */
    printf("Bispo: movendo %d casas na diagonal cima-direita\n", bispo_passos);
    i = 1;
    while (i <= bispo_passos) {
        printf("Cima, Direita\n");
        i++;
    }

    /* --- Rainha (movimenta-se em todas as direções) ------------------------- */
    /* Usamos um loop `do-while` para simular a Rainha movendo `rainha_passos`
       casas para a esquerda. O do-while garante pelo menos uma iteração quando
       passos > 0. */
    printf("Rainha: movendo %d casas para a esquerda\n", rainha_passos);
    i = 0;
    if (rainha_passos > 0) {
        do {
            printf("Esquerda\n");
            i++;
        } while (i < rainha_passos);
    }

    return 0;
}
