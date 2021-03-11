/*Ler um número inteiro com até 4 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
*/

#include <stdio.h>
#include <math.h>

int main (void){

    int numinteiro,num1,num2,num3,inrverso;

    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &numinteiro);

    num1 = numinteiro/100;
    num2 = (numinteiro - (num1*100))/10;
    num3 = (numinteiro - (((num1*100)+(num2*10))));

    inrverso = (num3*100)+(num2*10)+(num1);

    printf("\n%d eh o primeiro digito",num1);
    printf("\n%d eh o segundo digito",num2);
    printf("\n%d eh o terceiro digito",num3);
    printf("\n%d O inverso é",inrverso);



    return 0;
}