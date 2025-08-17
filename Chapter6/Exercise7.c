/*9) Faça um programa que receba do usuário dois arrays, A e B, com 10
 números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
 na tela os dados do array C. */
 
#include <stdio.h>
#include <stdlib.h>

 int main()
 {
    int A[10] = {5, 8, 12, 20, 3, 7, 15, 9, 6, 11};
    int B[10] = {2, 4, 10, 5, 1, 3, 8, 7, 2, 9};
    int C[10];


    for(int i = 0; i < 10; i++)
    {
        C[i] = A[i] - B[i];
        printf("C = A - B é igual a [ %d ] \n", C[i]);
    } 
    
 }