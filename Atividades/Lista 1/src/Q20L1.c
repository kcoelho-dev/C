/**
 * @file Q20L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 20 da Lista de Exercícios 1
 * @date 2021-02-20
 * 
 * @details Um hotel cobra R$ 80,00 a diária e mais uma taxa de serviço.
 *          A taxa de serviços é de:
 *          >R$ 5,50 por diária, se o número de diárias for maior que 15;
 *          >R$ 6,00 por diária, se o número de diárias for igual a 15;
 *          >R$ 8,00 por diária, se o número de diárias for menor que 15;
 *          >Construa um programa que mostre o nome e a fatura de um cliente.
**/


#include <stdio.h>
#include <string.h>

#define DIARIA 80.0
#define TAXAMAIOR15 5.5
#define TAXAIGUAL15 6.0
#define TAXAMENOR15 8.0

/**
 * @brief Valida a entrada da quantidade de diárias
 * 
 * @return int 
**/
int ValidarDiarias()
{
    int diarias = -1;
    while(diarias <= 0)
    {
        printf("Digite uma quantidade de diárias maior ou igual a 1: ");
        scanf("%d", &diarias);
    }
    return diarias;
}

/**
 * @brief Determina a taxa de serviço de acordo com a quantidade de dias de hospedagem
 * 
 * @param d Quantidade de diarias
 * @return double A taxa de serviço a ser aplicada
**/
double TaxaServicoUtilizada(int d)
{
    if (d > 15)
    {
        return TAXAMAIOR15;
    }
    else if (d < 15)
    {
        return TAXAMENOR15;
    }
    else
    {
        return TAXAIGUAL15;
    }
}


/**
 * @brief Recebe o nome do cliente
 * 
 * @param c Nome do cliente
**/
void CadastroCliente(char* c)
{
    printf("Digite o nome do cliente para cadastro: ");
    scanf("%[^\n]%*c", c);
}

/**
 * @brief Imprime o relatório de custos final, exibindo o nome do cliente e a descrição dos custos
 * 
 * @param c Nome do cliente
 * @param d Quantidade de diárias
**/
void ImprimirRecibo(char* c, int d)
{
    double taxa_utilizada = TaxaServicoUtilizada(d);
    double total = (taxa_utilizada + DIARIA) * d;
    printf("\n\n\n===================RECIBO DE HOSPEDAGEM==================\n");
    printf("|=======================================================|\n");
    printf("|\tValor da Diária\t\t|\tR$%.2lf\t\t|\n", DIARIA);
    printf("|\tQuantidade de Diárias:\t|\t%d\t\t|\n", d);
    printf("|\tTaxa de Serviço:\t|\tR$%.2lf ao dia\t|\n", taxa_utilizada);
    printf("|=======================================================|\n");
    printf("|  Subtotal das Diárias:\t| R$%.0lf x %d dias = %.0lf\t|\n", DIARIA, d, DIARIA * d);
    printf("|  Subtotal das Taxas:\t\t| R$%.2lf x %d dias = %.0lf\t|\n", taxa_utilizada, d, taxa_utilizada * d);
    printf("|\tTOTAL GERAL:\t\t|\tR$%.2lf\t|\n", total);
    printf("|=======================================================|\n");
    printf("\t\tCliente: %s\n", c);
    printf("|=======================================================|\n");
}


int main(int argc, char const *argv[])
{
    char cliente[100];
    int diarias;
    double total;
    CadastroCliente(cliente);

    printf("O nome do cliente é: %s\n", cliente);
    diarias = ValidarDiarias();

    ImprimirRecibo(cliente, diarias);

    return 0;
}
