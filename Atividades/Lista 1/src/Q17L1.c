/**
 * @file Q17L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 17 da Lista de Exercícios 1
 * @date 2021-02-19
 *
 * @details Faça um programa que implemente uma calculadora simples.
 *          A calculadora é capaz de fazer as quatros operações matemáticas (soma, subtração, divisão e multiplicação) de dois números inteiros.
 **/

#include <stdio.h>

/**
 * @brief Função com passagem de valores por referência
 *
 * @param ptr_x Ponteiro para receber e modificar os valores de X
 * @param ptr_y Ponteiro para receber e modificar os valores de Y
 **/
void LerValores(int *ptr_x, int *ptr_y)
{
    printf("Digite o primeiro valor: ");
    scanf("%d", ptr_x);
    printf("Digite o segundo valor: ");
    scanf("%d", ptr_y);
}

/**
 * @brief Realiza a soma entre as variáveis X e Y
 *
 * @param x
 * @param y
 **/
void somar(int x, int y)
{
    printf("\tSOMA:\n\t%d + %d = %d\n", x, y, x + y);
}

/**
 * @brief Realiza a subtração entre as variáveis X e Y
 *
 * @param x
 * @param y
 **/
void subtrair(int x, int y)
{
    printf("\tSUBTRAÇÃO:\n\t%d - %d = %d\n", x, y, x - y);
}

/**
 * @brief Realiza a multiplicação entre as variáveis X e Y
 *
 * @param x
 * @param y
 **/
void multiplicar(int x, int y)
{
    printf("\tMULTIPLICAÇÃO:\n\t%d * %d = %d\n", x, y, x * y);
}

/**
 * @brief Realiza a divisão entre as variáveis X e Y, desde que Y não seja igual a zero
 *
 * @param x
 * @param y
 **/
void dividir(int x, int y)
{
    if (y == 0)
    {
        printf("Divisão por zero não permitida!\n");
        printf("\t\t===>\t%d / %d <=\n", x, y);
        printf("Programa Encerrado!\n");
        return;
    }
    printf("\tDIVISÃO:\n%d / %d = %d\n", x, y, x / y);
}

/**
 * @brief   Realiza a validação da opção escolhida pelo usuário, que pode ser:
 *          1 - Somar;
 *          2 - Subtrair;
 *          3 - Multiplicar;
 *          4 - Dividir;
 *          0 - Sair;
 *
 * @return int Opção já validada enviada para a função principal main()
 **/
int menu()
{
    int opcao = -1;
    printf("Qual o tipo de operação deseja efetuar?\n");
    while (opcao < 0 || opcao > 4)
    {
        printf("1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n0 - Sair\n");
        printf("Escolha uma opção válida\n==> ");
        scanf("%d", &opcao);
    }

    return opcao;
}

int main(int argc, char const *argv[])
{
    int opcao = menu(); // Variável que recebe a opção escolhida pelo usuário na função menu()
    if (opcao == 0)
    {
        printf("Programa encerrado!\n");
        return 0; // Encerra o programa caso o usuário tenha escolhido por sair na função menu()
    }
    int x; // Variável para armazenar o primeiro valor informado pelo usuário
    int y; // Variável para armazenar o segundo valor informado pelo usuário

    LerValores(&x, &y);

    switch (opcao)
    {
        case 1:
            somar(x, y);
            break;
        case 2:
            subtrair(x, y);
            break;
        case 3:
            multiplicar(x, y);
            break;
        case 4:
            dividir(x, y);
            break;
    }
    return 0;
}
