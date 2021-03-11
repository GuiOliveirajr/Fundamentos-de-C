/*) Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na 
diária. Sendo informados o número de apartamentos do hotel e o valor da diária por apartamento para o final 
de semana completo.*/

#include <stdio.h>
#include <math.h>

int main (void){

    float valorDia, valorTotal,valorDesc, numQuartos, valorPerdido;

    printf("informe a quantia de quartos que o hotel possui: ");
    scanf("%f", &numQuartos);
    printf("informe o valor total da diaria: ");
    scanf("%f", &valorDia);

    valorDesc = valorDia*0.75;

    valorTotal = (valorDesc*numQuartos)*2;

    valorPerdido = ((valorDia*numQuartos) - (valorDesc*numQuartos))*2;

    printf("\nO valor da diaria promocional eh: R$ %.2f", valorDesc);
    printf("\nO total arrecadado com 100%% de ocupacao eh: R$ %.2f",valorTotal);
    printf("\nO total arrecadado com 70%% de ocupacao: R$ %.2f", (valorTotal*0.7));
    printf("\nO valor que deixará de arrecadar ao aplicar o desconto: R$%.2f", valorPerdido);






    return 0;
}