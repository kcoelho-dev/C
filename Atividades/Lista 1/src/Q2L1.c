/**
 * @file Q2L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 2 da Lista de Exercícios 1
 * @date 2021-02-17
 * 
 * @details Faça um programa que leia dois valores numéricos inteiros (representados pelas variáveis A e B)
 *          e apresente o resultado do quadrado da diferença do primeiro valor (variável A) em relação ao segundo (variável B).
**/
#include <stdio.h>

int main()
{

    int a, b, x;

    printf("Insira dois valores inteiros: ");
    scanf("%i %i", &a, &b);
    x = a - b;
    x *= x;
    printf("O resultado do quadrado da diferenca entre %i e %i eh igual a: %i\n", a, b, x);
    printf("\nOu seja: %i - %i = %i. E %i^2 = %i.\n", a, b, a - b, a - b, x);

    return 0;
}
