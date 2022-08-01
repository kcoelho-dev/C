/**
 * @file Q10L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 10 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Faça um programa que ordene em ordem crescente dois valores definidos pelo usuário.
 * 
**/
#include <stdio.h>


/**
 * @brief 
 * 
 * @param a 
 * @param b 
**/
void ordenar(int a, int b)
{
    if (a > b)
    {
        printf("%i %i\n", b, a);
    }
    else
    {
        printf("%i %i\n", a, b);
    }
    
}

int main(int argc, char const *argv[])
{
    int a; //Primeiro valor definido pelo usuário
    int b; //Segundo valor definido pelo usuário

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);

    ordenar(a, b);
    printf("%d", maior(a,b));


    return 0;
}
