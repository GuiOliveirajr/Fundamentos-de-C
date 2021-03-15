//Aluno: eguinaldo couras de oliveira junior.
//O código abaixo reajusta o preço de um produto de acordo com a porcentagem exigida

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void)
{
    float valor1, resultado,porcen;

    printf("Qual o valor do produto? R$");
        scanf("%f", &valor1);

    printf("Qual a porcentagem?");
        scanf("%f", &porcen );

    resultado = valor1 + (valor1*(porcen/100));

    printf("O novo valor do produto: %f", resultado);


    return(0);

}


