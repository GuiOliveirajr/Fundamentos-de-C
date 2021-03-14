/*) Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente 
separadamente os reais (parte inteira) e os centavos (parte decimal).
Observação: Apresentar os centavos como inteiro de dois dígitos (exemplo: 40 em vez de 0.40)*/

#include <stdio.h>
#include <math.h>

int main (void){
    double salario, centavos;
    long int reais;
    
    printf("Informe o valor do salario:R$ ");
    scanf("%lf", &salario);

    reais = (long int)salario;

    centavos = (salario - reais)*100;

    printf("\nSalario informado: R$ %lf",salario);
    printf("\nReais: %ld", reais);
    printf("\nCentavos: %.0f", centavos);

    return 0;
}