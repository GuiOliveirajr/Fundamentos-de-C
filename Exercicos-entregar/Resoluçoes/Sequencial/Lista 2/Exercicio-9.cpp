/*Escreva um programa que o leia o n�mero de horas trabalhadas por um funcion�rio,
 o valor por hora, o n�mero de filhos com idade menor do que 14 anos, o valor do
  sal�rio fam�lia por filho e calcule e mostre o sal�rio desse funcion�rio. */

#include <stdio.h>

int main(void)

{
    float horas, valhora, filhos, salario;

    printf("Informe o numero de horas trabalhadas: ");
    scanf("%f", &horas);
    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &valhora);
    printf("Informe o numero de filhos menor que 14 anos: ");
    scanf("%f", &filhos);
    printf("Informe o valor do salario familia: ");
    scanf("%f", &salario);

    printf("Salario total=R$%.2f", (horas * valhora) + (filhos * salario));

    return 0;


}
