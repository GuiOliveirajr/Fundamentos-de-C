/*Criar um programa que leia o peso (em kg) de uma pessoa e calcule e imprima:
a) O peso da pessoa em gramas.
b) O novo peso, em gramas, se a pessoa engordar 12%.*/

#include <stdio.h>
#include <math.h>

int main (void){

    float pesokg, pesog, newpeso;

    printf("informe seu peso em kg: ");
    scanf("%f", &pesokg);
    
    pesog = pesokg*1000;
    newpeso = pesog + (pesog*0.12);

    printf("\npeso em gramas %.2f", pesog);
    printf("\npeso se engordar 12%%: %.2f ",newpeso);
    printf("\nPeso em kg se engordar 12%%: %.1f", newpeso/1000);

    return 0;
}