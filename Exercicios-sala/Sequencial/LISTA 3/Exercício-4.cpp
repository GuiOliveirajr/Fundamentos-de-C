/*Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um 
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos*/

#include <stdio.h>
#include <math.h>

int main (void){

    int numInt, uni,dez,mil;

    printf("\n Informe um numero inteiro de ate 3 digitos");
    scanf("%d",&numInt);

    uni = numInt/100;
    dez = (numInt/10) - (uni*10);
    mil = (numInt) - (uni*100) - (dez*10);
     
    printf("%d + %d + %d = %d",uni, dez, mil, uni+dez+mil);

    return 0;
}