/**
 * @file Q8L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 8 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Precisamos calcular quanto uma pessoa consegue economizar em um mês.
 *          Para isso é necessário construir um programa que receba:
 *          > o salário líquido da pessoa,
 *          > o valor da conta de energia
 *          > aluguel        
 *          > alimentação e
 *          > lazer.
 *          Mostre como saída do programa se a pessoa teve saldo negativo ou positivo e qual o valor que sobrou ou faltou.
**/

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Faz a verificação dos valores inseridos pelo usuário
 * 
 * @param valor - Valor a ser validado
 * @return true - Se o valor não for negativo, retorna VERDADEIRO
 * @return false - Se for negativo, retorna FALSO
**/
bool ValidarEntrada(double valor)
{
    if(valor < 0)
    {
        printf("Valores negativos não suportados.\nDigite Novamente: ");
        return 0;
    }
    return 1;

}

/**
 * @brief Lê o valor referente à descrição passada por parâmetro
 * 
 * @param descricao Texto para descrever qual dos valores (salário, energia, aluguel, alimentacao ou lazer) será solicitado ao usuário
 * @return double 
**/
double LerValor(char descricao[])
{
    float valor;
    printf("Digite o %s: ", descricao);
    scanf("%f", &valor);
    
    while(ValidarEntrada(valor) == 0)
    scanf("%f", &valor);

    return valor;

}


int main(int argc, char const *argv[])
{
    float salario = LerValor("valor do Salário");           //<Variável para armazenar o salário do usuário
    double energia = LerValor("custo com energia");         //<Variável para armazenar o custo mensal com energia
    double aluguel = LerValor("custo com aluguel");         //<Variável para armazenar o custo mensal com aluguel
    double alimentacao = LerValor("custo com alimentacao"); //<Variável para armazenar o custo mensal com alimentação
    double lazer = LerValor("custo com lazer");             //<Variável para armazenar o custo mensal com lazer

    double despesaTotal = energia + aluguel + alimentacao + lazer; //<Armazena a dos itens, resultando na despesa mensal do usuário
    
    if(despesaTotal > salario) //Se a despesa for maior que o salário
    {
        printf("Seu salário é de R$%.2f.\n", salario);
        printf("Enquanto sua despesa mensal é de R$%.2f.\n", despesaTotal);
        printf("Você está com saldo negativo de (R$%.2f).\n", despesaTotal - salario);
    }
    else //Se a despesa for menor ou igual ao salário
    {
        printf("Seu salário é de R$%.2f.\n", salario);
        printf("Sua despesa mensal é de R$%.2f.\n", despesaTotal);
        printf("Você está com saldo positivo de R$%.2f.\n", salario - despesaTotal);
    }

    return 0;
}
