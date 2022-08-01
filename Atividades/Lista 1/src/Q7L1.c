/**
 * @file Q7L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 7 da Lista de Exercícios 1
 * @date 2021-02-18
 *
 * @details Todo restaurante, embora por lei não possa obrigar o cliente a pagar, cobra 10% de comissão para o garçom.
 *          Crie um programa que leia o valor conta de um cliente em um restaurante e:
 *          >Imprima o valor da comissão
 *          >Imprima o valor da conta com a comissão incluída.
 **/
#include <stdio.h>

int main(void)
{
    float valorConta; //Valor original dos gastos do cliente no restaurante;
    float comissao; //Percentual da comissão referente ao valor da conta do cliente;
    float total;    //Total da conta + comissão do garçom

    printf("Informe o valor das despesas: ");
    scanf("%f", &valorConta);
    comissao = valorConta * 0.1;
    total = valorConta + comissao;
    
    printf("\n\n===EXTRATO DE DESPESAS DO RESTAURANTE===\n");
    printf("Consumo: \t\tR$%.2f\n", valorConta);
    printf("Comissão de 10\%:\tR$%.2f\n", comissao);
    printf("========================================\n");
    printf("\tTotal: R$%.2f\n", total);
    printf("========================================\n");

    return 0;
}
