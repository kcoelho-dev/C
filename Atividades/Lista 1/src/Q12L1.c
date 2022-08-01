/**
 * @file Q12L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 12 da Lista de Exercícios 1
 * @date 2021-02-18
 *
 * @details Faça um programa que leia 4 números inteiros e some somente os números pares.
 **/
#include <stdio.h>

int main(void)
{
    int x;  //Variável para armazenar os números digitados pelo usuário
    int soma = 0; // Variável para armazenar a soma dos números pares
    for (int i = 0; i != 4; i++)
    {
        printf("Digite o %dº numero: ", i+1);
        scanf("%i", &x);
        if (x % 2 == 0)
        {
            soma += x;
        }
    }
    printf("Soma dos pares eh = %i\n", soma);

    return 0;
}
