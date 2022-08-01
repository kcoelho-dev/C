/**
 * @file Q5L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 5 da Lista de Exercícios 1
 * @date 2021-02-17
 * 
 * @details Faça um programa que a partir do valor de uma compra, calcule o valor dividido em 3 prestações.
 *          Considere que o valor de entrada deve ser um valor inteiro (a diferença deve ser cobrada na última prestação).
 *          Mostre o valor das 3 prestações.
**/
#include <stdio.h>

int main(void)
{

    float valor; //Variável para armazenar o valor da compra realizada pelo usuário
    int parcela; //Variável para o cálculo da parcela
    
    printf("Insira o valor da compra: ");
    scanf("%f", &valor);
    parcela = valor / 3;
    printf("Parcela 1: %d.00\n", parcela);

    valor = valor - parcela;
    parcela = valor / 2;
    printf("Parcela 2: %d.00\n", parcela);

    valor = valor - parcela;


    printf("Parcela 3: %.2f\n", valor);

    return 0;
}
