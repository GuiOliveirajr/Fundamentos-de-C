/*(DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador 
de resto.*/

#include <stdio.h>
#include <math.h>

int main (void){
    
    int num1, num2, restoInt;
    float resto;

    printf("Informe um valor inteiro: ");
    scanf("%d",&num1);
    printf("\nInforme outra valor inteiro: ");
    scanf("%d",&num2);

    resto = (float)num1/num2;
    restoInt = (resto - (num1/num2))*num2;

    printf("\n O resto da divisao eh: %d ",restoInt);

    return 0;
}