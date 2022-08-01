/**
 * @file Q15L1.c
 * @author Kelvin Coelho Loiola (kcoelho.dev@gmail.com)
 * @brief Questão 15 da Lista de Exercícios 1
 * @date 2021-02-18
 * 
 * @details Faça um programa que calcule o peso ideal para homens e mulheres a partir da altura.
            Utilize as seguintes fórmulas:
            > Homens → peso ideal = (72,7 * altura) – 58
            > Mulheres → peso ideal = (62,1 * altura) – 44,7
**/

#include <stdio.h>

/**
 * @brief Valida o sexo do usuário
 * 
 * @return char //Retorna caractere válido para identificação do sexo (m, M, f, F)
**/
char ValidarSexo()
{
    char s;

    while(s != 'M' && s != 'F' && s != 'm' && s != 'f')
    {
        printf("Qual seu sexo? (M/F): ");
        getchar();
        scanf("%c", &s);
        if(s != 'M' && s != 'F' && s != 'm' && s != 'f')
        {
            printf("Caractere para identificação do sexo inválido!\nDigite novamente\n");
        }
    }
    
    return s;
}

int main(int argc, char const *argv[])
{
    double altura;
    char sexo;
    printf("Digite sua altura em metros: ");
    scanf("%lf", &altura);

    sexo = ValidarSexo();
    
    if (sexo == 'F' || sexo == 'f')
    {
        printf("Sexo Feminino: seu peso ideal é: %.2fkg\n", ((62.1 * altura) - 44.7));
    }
    else
    {
        printf("Sexo Masculino: seu peso ideal é: %.2fkg\n",     ((72.7 * altura) - 58));
    }

    return 0;
}
