/* Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações 
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo 
consorciado e o saldo devedor*/

# include <stdio.h>
# include <math.h>

int main (void){

float quantPres, presPag, valorPrest;

    printf("\nInforme a quantidade total de prestacoes: ");
    scanf("%f", &quantPres);
    printf("\n Informe a quantidade de prestacoes pagas: ");
    scanf("%f", &presPag);
    printf("\nInforme o valor da prestacao: ");
    scanf("%f", &valorPrest);

    printf("\nValor total ja pago R$ %.2f",presPag*valorPrest );
    printf("\nSaldo devedor R$ %.2f", (quantPres - presPag)*valorPrest);

    return 0 ;




}