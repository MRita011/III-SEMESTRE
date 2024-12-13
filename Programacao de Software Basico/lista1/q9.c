#include <stdio.h>

/*
    Escreva uma função para calcular a soma a seguir. Crie uma função auxiliar
    para calcular o fatorial de um número (n! = n × n − 1 × n − 2... × 1)
    S = 1 + (1/2!) + (1/3!) + (1/4!) + ... + (1/8!) .
*/

int fatorial(int n);
double calcularSoma(int limite);

int fatorial(int n) {
    int resultado = 1;
    
    for (int i = 1; i <= n; i++) {
        // calcula o fatorial multiplicando os números
        resultado *= i;
    }
    return resultado;
}

double calcularSoma(int limite) {
    // começa no primeiro termo (1/1!)
    double soma = 1.0;  

    // calcula os termos de 1/2! até 1/8!
    for (int i = 2; i <= 8; i++) {
        // adiciona cada termo à soma
        soma += 1.0 / fatorial(i);  
    }
    return soma;
}

int main() {
    int limite;

    // lê o número limite para o cálculo da soma (até 1/limite!)
    printf("Digite o número limite para o cálculo: ");
    scanf("%d", &limite);

    // chama a função para calcular a soma até o limite fornecido
    double resultado = calcularSoma(limite);

    // exibe o resultado
    printf("A soma até 1/%d! é: %.6f\n", limite, resultado);

    return 0;
}