/*Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas. 
Também calcular e mostrar a soma dos dígitos.*/

#include <stdio.h>
#include <math.h>

int main (void){

    int numinteiro,num1,num2,num3,num4,num5;

    printf("\nDigite um numero inteiro de 5 digitos: ");
    scanf("%d", &numinteiro);

    num1 = numinteiro/10000;
    num2 = (numinteiro - (num1*10000))/1000;
    num3 = (numinteiro - (((num1*10000)+(num2*1000))))/100;
    num4 = (numinteiro- (((num1*10000)+(num2*1000)+(num3*100))))/10;
    num5 = (numinteiro- (((num1*10000)+(num2*1000)+(num3*100)+(num4*10))));
    printf("\n%d eh o primeiro digito",num1);
    printf("\n%d eh o segundo digito",num2);
    printf("\n%d eh o terceiro digito",num3);
    printf("\n%d eh o quarto digito",num4);
    printf("\n%d eh o quarto digito\n",num5);
    printf("\n%d eh o quarto digito\n",num5+num4+num3+num2+num1);





    return 0;
}