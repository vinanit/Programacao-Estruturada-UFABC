/*Escreva um programa em C que leia um inteiro positivo, digamos n, e imprima o inteiro
que resulta de inverter os algarismos de n.
Exemplo 1: se n = 1536, imprimir 6351
Exemplo 2: se n = 2030, imprimir 302
*/

#include <stdio.h>

void imprime_inverso(int n){
    int resto;
    int encontrou_nao_0 = 0;

    if (n == 0) {
        printf("0");
        return;
    }

    while (n > 0){
        resto = n % 10;
        
        if (resto != 0){
            encontrou_nao_0 = 1;
        }

        if (encontrou_nao_0){
            printf("%d", resto);
        }

        n /= 10;
    }

}


int main(void){

    int n;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    imprime_inverso(n);

    printf("\n");

    return 0;

}