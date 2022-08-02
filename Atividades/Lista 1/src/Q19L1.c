/**
 * @file Q19L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 19 da Lista de Exercícios 1
 * @date 2021-02-19
 *
 * @details Faça um programa que receba 3 valores que representarão os lados de um triângulo e verifique se os valores formam um triângulo.
 *          Classifique esse triângulo como:
 *          Eqüilátero (3 lados iguais);
 *          Isósceles (2 lados iguais);
 *          Escaleno (3 lados diferentes).
 *
 *          Obs: Lembre-se que para formar um triângulo:
 *          Nenhum dos lados pode ser igual a zero;
 *          Um lado não pode ser maior do que a soma dos outros dois;
 **/

#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Valida se os valores permitem que seja formado um triângulo
 *
 * @param a Lado A do objeto candidato a triângulo
 * @param b Lado B do objeto candidato a triângulo
 * @param b Lado C do objeto candidato a triângulo
 **/
bool ValidarTriangulo(int a, int b, int c)
{
    if (a == 0 || b == 0 || c == 0)
    {
        return false;
    }
    if (a > b + c)
    {
        return false;
    }
    else if (b > a + c)
    {
        return false;
    }
    else if (c > a + b)
    {
        return false;
    }
    else
    {
        return true;
    }

}

/**
 * @brief Define o tipo de Triângulo de Acordo com as dimensões 
 * 
 * @param a Lado A
 * @param b Lado B
 * @param c Lado C
**/
void DefinirTriangulo(int a, int b, int c)
{
    if (a == b && b == c && a == c)
    {
        printf("Triângulo Equilátero\n");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Triângulo Isóceles\n");
    }
    else
    {
        printf("Triângulo Escaleno\n");
    }
}
int main(int argc, char const *argv[])
{
    int a;  // Lado A
    int b;  // Lado B
    int c;  // Lado C

    printf("Digite a dimensão do lado A: ");
    scanf("%d", &a);
    printf("Digite a dimensão do lado B: ");
    scanf("%d", &b);
    printf("Digite a dimensão do lado C: ");
    scanf("%d", &c);

    if (ValidarTriangulo(a, b, c))
    {
        printf("As dimensões %dx%dx%d formam um ", a, b, c);
        DefinirTriangulo(a, b, c);
    }
    else
    {
        printf("Não é possível formar um triângulo com dimensões %dx%dx%d\n", a, b, c);
    }

    return 0;
}
