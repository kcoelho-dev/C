/**
 * @file Q16L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 16 da Lista de Exercícios 1
 * @date 2021-02-18
 *
 * @details Faça um programa que leia o número de gols de dois times em um jogo, leia o nome dos times e diga se o jogo foi empate ou quem foi o vencedor.
 **/
#include <stdio.h>
int main(void)
{
    int gols_time1, gols_time2;
    char time1[21], time2[21];

    printf("Digite o nome do primeiro time: ");
    scanf("%s", &time1);
    printf("Digite o nome do segundo time: ");
    scanf("%s", &time2);

    printf("Quantos gols o %s fez no jogo? - ", time1);
    scanf("%i", &gol_time1);
    printf("Quantos gols o %s fez no jogo? - ", time2);
    scanf("%i", &gol_time2);

    if (gol_time1 == gol_time2)
    {
        printf("Jogo empatado em %i X %i.\n", gol_time1, gol_time2);
    }
    else if (gol_time1 > gol_time2)
    {
        printf("%s ganhou de %i X %i.\n", time1, gol_time1, gol_time2);
    }
    else
    {
        printf("%s ganhou de %i X %i.\n", time2, gol_time2, gol_time1);
    }

    return 0;
}
