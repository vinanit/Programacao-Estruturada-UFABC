
//Escreva um programa em C que leia um inteiro positivo a que representa um ano, e
//imprima se a é bissexto. Dizemos que um ano a é bissexto se é divisível por 400, ou se é
//divisível por 4 e não por 100.
//Exemplo 1: se a = 2024, imprimir: bissexto
//Exemplo 2: se a = 1900, imprimir: nao bissexto

#include <stdio.h>

int main(void){
    int ano;
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("Ano bissexto\n");
    } else {
        printf("Ano não bissexto\n");
    }

    return 0;
}