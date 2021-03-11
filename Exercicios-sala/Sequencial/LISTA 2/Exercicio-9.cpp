/*Escreva um programa que o leia o número de horas trabalhadas por um funcionário,
 o valor por hora, o número de filhos com idade menor do que 14 anos, o valor do
  salário família por filho e calcule e mostre o salário desse funcionário. */

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
