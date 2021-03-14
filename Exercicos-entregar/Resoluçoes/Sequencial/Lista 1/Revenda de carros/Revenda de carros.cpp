//Aluno: eguinaldo couras de oliveira junior.
// o código a seguir calcula o salário final de um revendedor de carros.

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int carrosVend;
    float salariofix, comissafix, valorVenda, salarioLiq;

    printf("Calcule o salario de seu funcionario:");

    printf(" \n\n\n\   1.Informe o valor do salario fixo:R$");
        scanf("%f", &salariofix);
    printf("\n   2.Informe o valor da comissao por carro vendido:R$");
        scanf("%f",&comissafix);
    printf("\n   3.Informe o numero de carros vendidos:");
        scanf("%d",&carrosVend);
    printf("\n   4.Informe o valor total de vendas:R$");
        scanf("%f",&valorVenda);

    salarioLiq = (salariofix)+ (comissafix*carrosVend)+(valorVenda*5/100);

    printf("\n\n\n\ O salario liquido eh: R$%.2f",salarioLiq);

return (0);
}
