/*Suponha que um caixa disponha apenas de cédulas de R$ 100, R$ 10 e R$ 1. Escreva um programa para 
ler o valor de uma compra e o valor fornecido pelo usuário para pagar essa compra, e calcule o troco. 
Calcular e mostrar a quantidade de cada tipo de cédula que o caixa deve fornecer como troco. Mostrar 
também o valor da compra e do troco. Use variáveis do tipo int.
*/

#include <stdio.h>
#include <math.h>

int main (void){

    int valorCompra, valorPago, troco, not100,not10,not1;

    printf("informe o valor da compra: R$ ");
    scanf("%d",&valorCompra);
    printf("\n Informe o valor pago: R$ ");
    scanf("%d", &valorPago);

    troco = valorPago-valorCompra;

    not100 = (troco/100);
    not10 = ((troco) - (not100*100))/10;
    not1 = troco - ((troco/10)*10);

    printf("\nO troco de %d foi pago com:", troco);
    printf("\n %d notas de R$ 100", not100);
    printf("\n %d notas de R$ 10", not10);
    printf("\n %d notas de R$ 1", not1);




    return 0;
}