/**
 * @file Q13L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 13 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Construa um programa que recebe o ano do nascimento de uma pessoa e verifique se já poderá votar.
 *          Não esqueça que para votar a pessoa deve ter idade igual ou maior a 16 anos.
**/
#include <stdio.h>
#include <stdbool.h>

#define ANOATUAL 2021

/**
 * @brief Valida o ano de nascimento do usuário
 * @return int Retorna um ano de nascimento válido
**/
int ValidarNascimento()
{
    int ano;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano);
    while(ano > ANOATUAL || ano < 0)
    {
        printf("Ano inválido!\nDigite novamente: ");
        scanf("%d", &ano);
    }

    return ano;
}

/**
 * @brief Verifica se a diferença entre o ano atual e o ano de nascimento do usuário resulta numa idade maior ou igual a 16
 * 
 * @param nasc O ano de nascimento do usuário
 * @return true Retorna VERDADEIRO se o usuário tiver idade maior ou igual a 16
 * @return false Retorna FALSO se o usuário tiver idade menor que 16
**/
bool EhEleitor(int nasc)
{
    if ((ANOATUAL - nasc) >= 16)
    {
        return 1;
    }
    return 0;
}



int main(int argc, char const *argv[])
{
    int AnoDeNascimento = ValidarNascimento(); // AnoDeNascimento é inicializado com o retorno da função ValidarNascimento()

    if(EhEleitor(AnoDeNascimento))
    {
        printf("Tem mais de 16 anos de idade.\nPode votar!\n");
    }
    else
    {
        printf("Não cumpre o requisito mínimo de idade.\nEsta pessoa não pode votar!\n");
    }

    return 0;
}
