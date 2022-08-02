/**
 * @file Q18L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 18 da Lista de Exercícios 1
 * @date 2021-02-19
 * 
 * @details Conforme a tabela abaixo que mostra o número de horas extras em um mês e seu valor correspondente,
 *          faça um programa que calcule o salário de um funcionário a partir do valor base de seu salário mais o valor de horas extras trabalhadas.
 *          Considere que o funcionário não pode fazer mais de 40 horas extras em um mês.
 *          |1 hora → 10 horas   | R$ 10,00 por hora |
 *          |11 horas → 20 horas | R$ 12,00 por hora |
 *          |Acima de 20 horas   |R$ 14,00 por hora  |
**/

#include <stdio.h>

#define SALARIO_BASE 1400   //Definição do salário base como constante
#define ATE_DEZ 10          //Definição do salário/hora até 10 horas adicionais
#define ATE_VINTE 12        //Definição do salário/hora entre 11 e 20 horas adicionais
#define ACIMA_VINTE 14      //Definição do salário/hora acima de 20 horas adicionais

/**
 * @brief Valida a entrada da quantidade de horas adicionais, não permitindo valores negativos ou acima de 40 horas
 * 
 * @return int A quantidade de horas validada
**/
int ValidarHorasExtras()
{
    int horas = -1;

    while(horas < 0 || horas > 40)
    {
        printf("Digite uma quantidade de horas extras mensais entre 0 e 40\n==> ");
        scanf("%d", &horas);
    }
    
    return horas;
}

/**
 * @brief Calcula o salário final com base na quantidade de horas extras
 * 
 * @param he  Horas Extras trabalhadas
 * @return int Salário base + o cálculo das horas extras trabalhadas
**/
int CalcularExtras(int he)
{

    if (he <= 10)
    {
        return SALARIO_BASE + (ATE_DEZ * he);
    }
    else if (he > 10 && he < 20)
    {
        return SALARIO_BASE + (ATE_VINTE * he);
    }
    else
    {
        return SALARIO_BASE + (ACIMA_VINTE * he);
    }

}

int main(int argc, char const *argv[])
{
    int horas_extras = ValidarHorasExtras(); //Quantidade de horas extras validada, após receber valor da função ValidarHorasExtras()
    printf("O salário final será de R$%d\n", CalcularExtras(horas_extras));
    
    return 0;
}

