/*Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de 
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no */


#include <stdio.h>
#include <math.h>

int main (void){

    float salario, percAumento, percDesconto, salAumentado, salDesconto;
    long int reais;
    printf("Informe o valor do salario: R$");
    scanf("%f",&salario);
    printf("Informe o valor do aumento: R$");
    scanf("%f",&percAumento);
    printf("Informe o valor do desconto: R$");
    scanf("%f",&percDesconto);

    salAumentado = salario + (salario*(percAumento/100));

    salDesconto = salAumentado - (salAumentado*(percDesconto/100));

    reais = (long int) salDesconto;

    printf("\no Salario aumentado: R$%.2f",salAumentado);
    printf("\nO Salario liquido: R$%.2f",salDesconto);

    printf("\nO Salario liquido eh: %ld reais e %.0f centavos ",reais,((salDesconto - reais)*100) );


    return 0;
}