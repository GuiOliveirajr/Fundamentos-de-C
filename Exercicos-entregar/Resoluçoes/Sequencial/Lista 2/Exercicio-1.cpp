/* Ler dois números float e apresentar, sem utilizar funções matemáticas prontas:*/


# include <stdio.h>
# include <math.h>


int main (void)
{
float num1, num2, soma;
int divisao;


    printf("Escreva um numero decimal: ");
    scanf("%f",&num1);
    printf("Escreva outro numero decimal; ");
    scanf("%f",&num2);

    divisao = (int)num1/num2;
    soma = num1+num2;

    printf("\n A divisao entre %.2f/%.2f eh: %d ",num1,num2,divisao);
    printf("\n A soma dos numeoros %.2f + %.2f é: %.0f",num1,num2, ceil(soma));



    return 0;

}
