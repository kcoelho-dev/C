/**
 * @file Q11L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 11 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Faça um programa que ordene em ordem decrescente três valores definidos pelo usuário.
**/
#include <stdio.h>


/**
 * @brief Ordena os valores e imprime-os em ordem decrescente
 * 
 * @param a 
 * @param b 
 * @param c 
**/
void ordenar(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
        {
            printf("%d %d %d\n", a, b, c);
        }
        else if (a > c)
        {
            printf("%d %d %d\n", a, c, b);   
        }
        else
        {
            printf("%d %d %d\n", c, a, b);
        }
    }
    else if (b > c)
    {
        if(a > c)
        {
            printf("%d %d %d\n", b, a, c);
        }
        else
        {
            printf("%d %d %d\n", b, c, a);
        }
    }
    else
    {
            printf("%d %d %d\n", c, b, a);
    }
}
    

int main(int argc, char const *argv[])
{
    int a;  //Primeiro valor inserido pelo usuário
    int b;  //Segundo valor inserido pelo usuário
    int c;  //Terceiro valor inserido pelo usuário

    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    ordenar(a, b, c);


    return 0;
}
