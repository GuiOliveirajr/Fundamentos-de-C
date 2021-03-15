/*Cada degrau de uma escada tem uma altura X. Faça um programa para ler essa altura e a altura que o 
usuário deseja alcançar subindo a escada. Calcule e mostre quantos degraus o usuário deverá subir para 
atingir o seu objetivo*/

#include <stdio.h>
#include <math.h>

int main (void){
    float altDeg, altDesejada, numDegraus;

    printf("informe a altura do degrau: ");
    scanf("%f",&altDeg);
    printf("\nInforme a altura que deseja alcancar: ");
    scanf("%f",&altDesejada);

    numDegraus = altDesejada/altDeg;

    printf("\n A quantia de degraus que voce deverá subir eh: %.2f", ceil(numDegraus));

    return 0;
}