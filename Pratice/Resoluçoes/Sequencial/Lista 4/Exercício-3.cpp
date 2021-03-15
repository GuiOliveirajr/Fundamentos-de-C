/*Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da 
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos.
Exemplo:*/

#include <stdio.h>
#include <math.h>

int main (void){

    double valor1;
    int reais, centavos;

    printf("Informe o valor do troco");
    scanf("%lf",&valor1);

    reais = (int)valor1;
    centavos = (valor1 - reais)*100;

    printf("o valor informado eh %d reais e %d centavos",reais, centavos);


    return 0;
}