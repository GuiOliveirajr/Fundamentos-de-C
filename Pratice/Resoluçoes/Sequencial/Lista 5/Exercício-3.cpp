/*programa que calcule o valor da conversão para dólares de um valor lido em reais.*/


# include <stdio.h>
# include <math.h>

int main (void)
{
 float valorDollar, valorReais, conver;

    printf("\n Informe o valor atual do dolar:");
    scanf("%f",&valorDollar);
    printf("\n Informe a quantia de Reais:");
    scanf("%f",&valorReais);

    conver = valorReais/valorDollar ;

    printf("R$%.2f equivalem %.2f", valorReais, conver);

    return 0;

}