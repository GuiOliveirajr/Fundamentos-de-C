/*) Faça um programa para calcular a quantidade de fita necessária, em centímetros, para amarrar um pacote 
com duas voltas, sendo uma pela largura e outra pelo comprimento do pacote. Serão fornecidas a largura, a 
altura e o comprimento do pacote. Para amarrar as pontas da fita são necessários 15 cm de fita em cada 
ponta. A figura a seguir ilustra a maneira como a fita é passada pelo pacote.
*/

#include <stdio.h>
#include <math.h>

int main (void){

    float larg, alt, comprimento, fita;

    printf("\nQual a largura da caixa?");
    scanf("%f", &larg);
    printf("\n Qual o comprimento da caixa?");
    scanf("%f", &comprimento);
    printf("\n Qual a altura da caixa?");
    scanf("%f", &alt);

    fita = ((comprimento + alt + larg)*2) + (alt*2) + 30;

    printf("\n A quantia de fita necessaria é: %f cm", fita);

    



    return 0;
}