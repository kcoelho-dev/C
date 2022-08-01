/**
 * @file Q4L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 4 da Lista de Exercícios 1
 * @date 2021-02-17
 *
 * @details Escreva um programa que leia um número inteiro e imprima o seu sucessor e seu antecessor.
 **/
#include <stdio.h>

int main(void)
{

    int x; // Número informado pelo usuário
    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("Antecessor: %i\nNumero informado: %i\nSucessor: %i", x - 1, x, x + 1);

    return 0;
}
