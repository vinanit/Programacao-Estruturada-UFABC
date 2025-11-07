/*
Escreva um programa em C que leia um inteiro n e uma sequência de n inteiros, e imprima
quantos segmentos de números iguais consecutivos compõem essa sequência.
Exemplo: Se n = 9 e a sequência é: 5 2 2 3 4 4 4 1 1, imprimir 5
Note que o primeiro segmento é “5”, o segundo segmento é “2 2”, o terceiro é “3”, o quarto
é “4 4 4” e o quinto é “1 1”
*/



#include <stdio.h>

int main(void){
    int n, aux, atual, cont = 1;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    // Para o primeiro valor
    scanf("%d", &atual);


    for (int i = 1; i < n; i++){
        scanf("%d", &aux);

        if (aux != atual){
            atual = aux;
            cont++;
        }

    }

    printf("%d sequencias\n", cont);

    return 0;

}