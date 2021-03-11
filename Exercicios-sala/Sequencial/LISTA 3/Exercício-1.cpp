/* Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal 
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa 
unidade, dezena e centena e mostrar.*/

#include <stdio.h>
#include <math.h>

int main (void){
    
    double valor;
 
    valor = 123.456789;

    printf("\n Numero informado: %lf", valor );
    printf("\n Parte inteira %d",(int)valor);
    printf("\n Parte decimal %f",valor - 123);
    printf("\n Decimal como inteiro %.0f",((valor-123) * 1000));
    printf("\n Centena(s) %.0f ",valor/100);
    printf("\n Dezena(a) %d",(int)(valor-100)/10);
    printf("\n Dezena(a) %d",(int)(valor-120));

    return 0;

}
