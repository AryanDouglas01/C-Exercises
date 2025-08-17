/* 10) Faça um programa que preencha um vetor de tamanho 100 com os 100
 primeiros números naturais que não são múltiplos de 7. Ao final, imprima
 esse vetor na tela. */

#include<stdlib.h>
#include<stdio.h>


int main() {
    int A[100];
    int i = 0;   // posição no vetor
    int n = 1;   // começamos do 1 (primeiro número natural)

    while (i < 100) {
        if (n % 7 != 0) {
            A[i] = n;
            printf("A[%d] = %d\n", i, A[i]);
            i++;
        }
        n++;
    }

    return 0;
}