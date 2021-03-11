/*Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
*/

#include <stdio.h>
#include <math.h>

int main (void){

    int numinteiro,num1,num2,num3,num4;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &numinteiro);

    num1 = numinteiro/1000;
    num2 = (numinteiro - (num1*1000))/100;
    num3 = (numinteiro - (((num1*1000)+(num2*100))))/10;
    num4 = (numinteiro- (((num1*1000)+(num2*100)+(num3*10))));

    printf("\n%d eh o primeiro digito",num1);
    printf("\n%d eh o segundo digito",num2);
    printf("\n%d eh o terceiro digito",num3);
    printf("\n%d eh o quarto digito",num4);



    return 0;
}