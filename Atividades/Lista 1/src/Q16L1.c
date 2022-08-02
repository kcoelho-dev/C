/**
 * @file Q16L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 16 da Lista de Exercícios 1
 * @date 2021-02-18
 *
 * @details Faça um programa que leia o número de gols de dois times em um jogo, leia o nome dos times e diga se o jogo foi empate ou quem foi o vencedor.
 **/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 21

/**
 * @brief Valida a entrada da quantidade de gols, impedindo a inserção de valores negativos
 * 
 * @param time O nome do time para exibir na chamada
 * @return int A quantidade de gols já validada
**/
int ValidarGols(char* time)
{
    int gols = -1;
    while(gols < 0)
    {
        printf("Digite a quantidade válida de gols que o time '%s' fez durante o jogo: ", time);
        scanf("%d", &gols);
    }

    return gols;
}

int main(void)
{
    char time1[MAX_SIZE]; // Variável do tipo 'char string' para armazenar o nome do time 1
    char time2[MAX_SIZE]; // Variável do tipo 'char string' para armazenar o nome do time 2

    int gols_time1; //  Variável para armazenar a quantidade de gols realizados pelo time 1
    int gols_time2; //  Variável para armazenar a quantidade de gols realizados pelo time 2
    printf("Digite o nome do primeiro time: ");
    scanf("%[^\n]%*c", time1);
    printf("Digite o nome do segundo time: ");
    scanf("%[^\n]%*c", time2);
    

    gols_time1 = ValidarGols(time1);
    gols_time2 = ValidarGols(time2);

    if (gols_time1 == gols_time2)
    {
        printf("Jogo empatado em %i X %i.\n", gols_time1, gols_time2);
    }
    else if (gols_time1 > gols_time2)
    {
        printf("%s ganhou de %i X %i.\n", time1, gols_time1, gols_time2);
    }
    else
    {
        printf("%s ganhou de %i X %i.\n", time2, gols_time2, gols_time1);
    }

    return 0;
}
