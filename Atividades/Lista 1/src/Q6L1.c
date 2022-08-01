/**
 * @file Q6L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 6 da Lista de Exercícios 1
 * @date 2021-02-17
 *
 * @details Escreva um programa que a partir de um determinado valor de saque, determine quantas notas de 100, 50, 10, 5 e 2 serão necessárias.
 *          Não esqueça que não é possível sacar moedas, por isso o valor a ser sacado deve ser múltiplo de um dos valores das notas.
 *          Caso isso não seja verdade, mostrar uma mensagem da impossibilidade do saque.
 **/
#include <stdio.h>

int main(void)
{
    int valor;  //Valor desejado para o saque
    int quantidade; //Contador das quantidades de cada nota o usuário receberá no saque

    printf("Insira um valor multiplo de 5 ou 2 para realizar o saque: ");
    scanf("%i", &valor);

    while (!(valor % 5 == 0 || valor % 2 == 0))
    {
        printf("O valor digitado nao eh multiplo de 5 ou 2, favor digitar novamente: ");
        scanf("%i", &valor);
    }
    printf("Seu saque sera realizado com as seguintes notas:\n");
    printf("%i notas de R$100,00\n", valor / 100);
    quantidade = valor % 100;
    printf("%i notas de R$50,00\n", quantidade / 50);
    quantidade %= 50;
    printf("%i notas de R$10,00\n", quantidade / 10);
    quantidade %= 10;
    printf("%i notas de R$5,00\n", quantidade / 5);
    quantidade %= 5;
    printf("%i notas de R$2,00\n", quantidade / 2);

    return 0;
}
