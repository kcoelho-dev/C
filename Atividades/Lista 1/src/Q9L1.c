/**
 * @file Q9L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 9 da Lista de Exercícios 1
 * @date 2021-02-18
 *
 * @details Faça um programa que calcule e mostre o valor do preço de uma corrida de táxi a partir do valor da bandeirada (valor por km) e da quilometragem percorrida.
            Após o valor da corrida, identifique o valor entregue pelo passageiro e calcule e mostre o valor que deve ser dado como troco.
 **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    double bandeirada; //Variável para armazenar o valor da bandeirada selecionado;
    int opcao;  //Variável para receber o argumento de entrada por linha de comando
    int km; //Quilometragem percorrida pelo cliente
    int valorPago;  //Valor pago pelo cliente
    double total;   //Valor total da corrida;

    if (argv[1] == NULL)
    {
        printf("\t***A chamada da execução dessa questão deve conter um argumento adicional referente a Bandeirada utilizada.\n");
        printf("\t***Exemplo:\n");
        printf("\t***Para bandeirada 1, a execução deve ser:\t./Q9L1 1\n");
        printf("\t***Para bandeirada 2, a execução deve ser:\t./Q9L1 2\n");
        printf("\t***Para bandeirada 3, a execução deve ser:\t./Q9L1 3\n\n");
        return 0;
    }
    opcao = atoi(argv[1]);


    
    switch (opcao)
    {
        case 1:
            printf("Bandeirada 1: Definindo valor da Bandeirada em R$3,80/km\n");
            bandeirada = 3.8;
            break;
        case 2:
            printf("Bandeirada 2: Definindo valor da Bandeirada em R$5,30/km\n");
            bandeirada = 5.3;
            break;
        case 3:
            printf("Bandeirada 3: Definindo valor da Bandeirada em R$8,50/km\n");
            bandeirada = 8.5;
            break;
        default:
            printf("Bandeirada selecionada inválida\nNeste caso o custo da Bandeirada 1 será utilizado como padrão!\n");
            printf("Bandeirada 1: Definindo valor da Bandeirada em R$3,80/km\n");
            opcao = 1;
            bandeirada = 3.8;
    }

    printf("Digite a quilometragem percorrida: ");
    scanf("%d", &km);

    total = bandeirada * km;

    printf("\n\n======EXTRATO DE TRANSPORTE DE TAXI======\n");
    printf("Bandeirada selecionada:\t\t%d\n", opcao);
    printf("Valor da Bandeirada %d:\t\tR$%.2lf/km\n", opcao, bandeirada);
    printf("Quilometros percorridos:\t%dkm\n", km);
    printf("=========================================\n");
    printf("\tTotal da Viagem:  R$%.2lf\n", total);
    printf("=========================================\n");

    printf("Valor da nota de dinheiro\npara pagamento: R$");
    scanf("%d", &valorPago);

    while(valorPago < total)
    {
        int valorAdicional = 0;
        printf("Valor insuficiente para pagamento!\n");
        printf("Faltam R$%.2lf para fechar a conta!\n", total - valorPago);
        printf("Adicione um valor para complementar o pagamento: R$");
        scanf("%d", &valorAdicional);
        if(valorAdicional <= 0)
        {
            printf("Valores negativos não são aceitos. Tente novamente\n");
        }
        else
        {
            valorPago += valorAdicional;
        }
    }
    
    if(valorPago > total)
    {
        printf("Troco disponível: R$%.2lf\n", valorPago - total);
    }

    return 0;
}
