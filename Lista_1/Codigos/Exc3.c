/*Escreva um programa em C que leia um inteiro n e imprima os n primeiros números
primos.
Exemplo: se n = 5, imprimir: 2 3 5 7 11*/

#include <stdio.h>

int eh_primo(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;


    for (int i = 2; i <= n/2; i++){
        if (n%i == 0) return 0;
    }

    return 1;

}

int main(void){
    int n;

    printf("Quantidade de numeros primos: ");
    scanf("%d", &n);

    int primos = 0;
    int cont = 2;

    while (primos < n) {
        if (eh_primo(cont)) {
            printf(" %d", cont);
            primos++;
        }
        cont++;
    }
    printf("\n");
    return 0;
}