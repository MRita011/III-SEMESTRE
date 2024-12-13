#include <stdio.h>

int ehPrimo(int n);

int ehPrimo(int n) {
    // números <= a 1 não são primos
    if (n <= 1)
        return 0;

    // verifica se n é divisível por algum número entre 2 e a raiz de n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            // se for divisível, não é primo
            return 0; 
    }
    // se não for divisível, é primo
    return 1;
}

int main() {
    int n;

    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &n);

    if (ehPrimo(n)) 
        printf("%d é um número primo.\n", n);
        
    else 
        printf("%d não é um número primo.\n", n);

    return 0;
}
