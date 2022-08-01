/**
 * @file Q3L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 3 da Lista de Exercícios 1
 * @date 2021-02-17
 *
 * @details Elaborar um programa que apresente o valor da conversão em real (R$) de um valor lido em dólar (US$).
 *          O programa deve solicitar o valor da cotação do dólar e também a quantidade de reais para conversão.
 **/
#include <stdio.h>

int main(void)
{

    float dolar;   // Valor em dólar a ser informado pelo usuário
    float cotacao; // Cotação do dólar a ser informado pelo usuário
    float real;    // Resultado da conversão de dólar para real;

    printf("Informe um valor em dolar para conversao: U$");
    scanf("%f", &dolar);
    printf("Informe a cotacao atual do dolar: ");
    scanf("%f", &cotacao);
    real = dolar * cotacao;
    printf("Convertendo U$%.2f, com a cotacao atual de R$%.2f o dolar, voce tera R$%.2f", dolar, cotacao, real);

    return 0;
}
