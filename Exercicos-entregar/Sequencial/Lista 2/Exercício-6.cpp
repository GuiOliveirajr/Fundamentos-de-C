/**/

#include <stdio.h>
#include <math.h>

int main (void){

    float valorApli, taxaRendimento, numMeses, valorFinal;
    
    printf("informe o valor da aplicacao: ");
    scanf("%f",&valorApli);
    printf("\ninforme a taxa de rendimento (entre 0 e 1): ");
    scanf("%f", &taxaRendimento);
    printf("\nInforme o numero de meses: ");
    scanf("%f",&numMeses);

    valorFinal = (valorApli*(pow(1+taxaRendimento,numMeses)-1))/taxaRendimento;

    printf("\n O valor final eh: R$%.2f", valorFinal);

    return 0;
}