/**
 * @file Q1L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 1 da Lista de Exercícios 1
 * @date 2021-02-17
 * 
 * @details Crie um programa que leia 3 números inteiros.
 *          Verifique se a soma de dois deles é igual ao terceiro número,
 *          considerando todas as combinações possíveis.
 **/
#include <stdio.h>

int main(void)
{

    int a; // Primeiro número inteiro
    int b; // Segundo número inteiro
    int c; // Terceiro número inteiro
    
    printf("Informe tres numeros: ");
    scanf("%i %i %i", &a, &b, &c);

    if (a + b == c)
    {
        printf("%i + %i = %i\n", b, a, c);
    }
    else
    {
        printf("%i + %i != %i\n", a, b, c);
    }

    if (a + c == b)
    {
        printf("%i + %i = %i\n", a, c, b);
    }
    else
    {
        printf("%i + %i != %i\n", a, c, b);
    }

    if (b + c == a)
    {
        printf("%i + %i = %i\n", b, c, a);
    }
    else
    {
        printf("%i + %i != %i\n", b, c, a);
    }
    
    return 0;
}
