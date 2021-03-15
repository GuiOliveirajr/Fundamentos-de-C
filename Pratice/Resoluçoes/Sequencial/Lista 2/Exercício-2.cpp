/*Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo 
em dias, horas e minutos (as três últimas em tipo float).*/

#include <stdio.h>
#include <math.h>

int main (void){

    int seg;
    float dias, horas, minutos;

    printf("informe o valor em segundos: ");
    scanf("%d",&seg);

    minutos = seg/60;
    horas = seg/3600;
    dias = horas/24;

    printf("\n O tempo em minutos eh: %.2f",minutos);
    printf("\n O tempo em horas eh: %.2f",horas);
    printf("\n O tempo em dias eh: %.2f", dias);


    return 0;
}