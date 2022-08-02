/**
 * @file Q21L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 21 da Lista de Exercícios 1
 * @date 2021-02-20
 * 
 * @details Um Banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.
 *          Faça um programa que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
 *          Mostre uma mensagem informando o saldo médio e o valor do crédito.
 * 
 *          |     Saldo Médio    |          Percentual          |
 *          | de 0 a 200,00      | nenhum crédito (crédito = 0) |
 *          | de 201,00 a 400,00 | 20% do valor do saldo médio  |
 *          | de 401,00 a 600,00 | 30% do valor do saldo médio  |
 *          | acima de 600,00    | 40% do valor do saldo médio  |
**/

#include <stdio.h>

/**
 * @brief Recebe e valida o valor para a variável saldo_medio
 * 
 * @return double O saldo médio do cliente
**/
double SaldoMedio()
{
    double sm = -1.0;

    while (sm < 0)
    {
        printf("Digite um valor maior ou igual a zero para definir o Saldo médio: ");
        scanf("%lf", &sm);
    }

    return sm;
}

/**
 * @brief Avalia qual taxa de crédito o cliente obterá de acordo com sua média de saldo
 * 
 * @param sm Saldo médio
 * @return double A taxa de crédito
**/
double AvaliarCredito(double sm)
{
    if (sm >= 0.0 && sm <= 200.0)
    {
        return 0.0;
    }
    else if( sm>= 201.0 && sm <= 400.0)
    {
        return 0.2;
    }
    else if(sm >= 401 && sm <= 600)
    {
        return 0.3;
    }
    else
    {
        return 0.4;
    }

}


int main(int argc, char const *argv[])
{
    double saldo_medio = SaldoMedio();    
    double taxa_credito = AvaliarCredito(saldo_medio);

    printf("Tendo como base o Saldo Médio da conta no valor de R$%.2lf,\no crédito disponibilizado é de: %.0lf\%\n\tEquivalente a um valor de R$%.2lf\n", saldo_medio, taxa_credito * 100, saldo_medio * taxa_credito);


    return 0;
}

