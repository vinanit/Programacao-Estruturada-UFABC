/*Escreva um programa em C que leia um inteiro n e imprima todos os números pares entre
0 e n*/

#include <stdio.h>

int main(void){
    int n;

    printf("digite um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i < n+1; i++){
        if (i % 2 == 0){
            printf("%d ", i);
        } 

    }

    return 0;

}