#include <stdio.h>

/*
    Escreva uma função para um caixa de banco, que recebe um valor inteiro R
    e algumas variáveis (por referência) para armazenar o número de notas de 100, 
    50, 10, 5 e 1 reais, necessárias para pagar a quantia R. Faça de forma que o
    número de notas usado seja o menor possível.
*/

void calcularNotas(int R, int *n100, int *n50, int *n10, int *n5, int *n1);

void calcularNotas(int R, int *n100, int *n50, int *n10, int *n5, int *n1) {
    // quantas notas de 100 podem ser usadas
    *n100 = R/100;   
    // atualiza o R
    R = R % 100;

    *n50 = R/50;
    R = R % 50;

    *n10 = R/10;
    R = R % 10;

    *n5 = R/5;
    R = R % 5;

    *n1 = R;
}

int main() {
    int R;
    int n100, n50, n10, notas5, n1;

    // valor a ser retirado
    printf("digite o valor a ser retirado: ");
    scanf("%d", &R);

    // calcula as notas necessárias
    calcularNotas(R, &n100, &n50, &n10, &notas5, &n1);

    // exibe o número de notas de cada valor
    printf("notas de 100: %d\n", n100);
    printf("notas de 50: %d\n", n50);
    printf("notas de 10: %d\n", n10);
    printf("notas de 5: %d\n", notas5);
    printf("notas de 1: %d\n", n1);

    return 0;
}
