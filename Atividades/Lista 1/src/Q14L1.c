/**
 * @file Q14L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 14 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Faça um programa que verifique se a senha de 4 dígitos está correta para um determinado usuário
 *          (considere a senha correta 1234).
**/

#include <stdio.h>

#define SENHA 1234 //Definindo constante para a senha


int main(int argc, char const *argv[])
{
    int senha; //Senha a ser digitada pelo usuário
    printf("Beltrano...\nDigite sua senha de acesso\n\t==>\t");
    scanf("%d", &senha);

    if(senha != SENHA)
    {
        printf("\t***ERRO:\tSenha incorreta!***\n");
    }
    else
    {
        printf("Logado com sucesso!\n");
    }

    return 0;
}
