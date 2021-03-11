/*8) Faça um programa que leia o salário bruto mensal de um funcionário, */

#include <stdio.h>

int main(void)
{
    float bruto;

    printf("Informe o salario bruto: ");
    scanf("%f", &bruto);

    printf("\nSalario bruto= %.2f", bruto);
    printf("\n(-) IR(15%%)= %.2f", (bruto * 0.15));
    printf("\n(-) INSS(11%%)= %.2f", (bruto * 0.11));
    printf("\n(-) Sindicato(3%%) = %.2f", (bruto * 0.03));
    printf("\nSalario liquido= %.2f", (bruto -((bruto * 0.15) + (bruto * 0.03) + (bruto * 0.11))));

    return 0;

}
