/*um programa que, dados a quantidade de litros de combustível utilizada, os quilômetros 
percorridos por um automóvel e o valor do litro de combustível, calcule quantos quilômetros o veículo 
percorreu por litro de combustível e o valor gasto em reais por km*/

#include <stdio.h>
#include <math.h>

int main (void){
    
   float kmperco, combustivelConsumido,valorCombustivel, kmporlitro;

    printf("\ninforme os Km percorrido:");
    scanf("%f", &kmperco);
    printf("\nInforme o combustivel consumido: ");
    scanf("%f", &combustivelConsumido);
    printf("\nInforme o valor do litro de combustivel: ");
    scanf("%f", &valorCombustivel);

    kmporlitro = kmperco/combustivelConsumido;

    printf("\n O altomóvel fez %.2f por litro de combustivel: ",kmporlitro);
    printf("\n O gasto em reais por km foi %.2f ",(valorCombustivel/kmporlitro));

    return 0;

}