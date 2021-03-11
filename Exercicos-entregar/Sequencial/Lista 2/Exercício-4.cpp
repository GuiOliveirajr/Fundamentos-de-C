/**/

#include <stdio.h>
#include <math.h>

int main (void){

    float peso, altura;
    double IMC;

    printf("Qual sua altura em metros?: ");
    scanf("%f", &altura);
    printf("\nQual seu peso?: ");
    scanf("%f", &peso);

    IMC = peso / pow(altura,2);

    printf("\nSeu IMC eh: %lf", IMC);

    return 0;
}