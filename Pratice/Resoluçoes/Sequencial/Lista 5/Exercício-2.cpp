/*
 O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor 
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a 
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumido*/

# include <stdio.h>
# include <math.h>

int main (void){

    float custConsumidor,percentDistrib,percentImpost,custFabri;

    printf("\nInforme o Custo de fabrica:");
    scanf("%f", &custFabri);
    printf("\nInforme a porcentagem do distribuidor:");
    scanf("%f", &percentDistrib);
    printf("\nInforme a porcentagem de impostos:");
    scanf("%f", &percentImpost);

    custConsumidor = custFabri + (custFabri*(percentDistrib/100)) + (custFabri*(percentImpost/100));
    
    printf("%.2f",custConsumidor);

    return 0 ;

}