/**/

#include <stdio.h>
#include <math.h>

int main (void){

    long int segundos, horas, min;

    printf("Informe os segundos: ");
    scanf("%li", &segundos);

    horas = segundos/3600;

    min = (segundos%3600)/60;

    segundos = (segundos%60);
    printf(" %lihoras:%limin:%liseg", horas,min,segundos);


    return 0;
}