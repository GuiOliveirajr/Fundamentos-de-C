/*Ler um número que representa a quantidade de dias. Informe os anos (considere-os com 360 dias), meses 
(considere-os com 30 dias) e os dias contidos nesse valor.*/

#include <stdio.h>
#include <math.h>

int main (void){

    int dias, anos, mes, diasRest;

    printf("Informe o numero de dias");
    scanf("%d", &dias);

    anos = dias/360;
    mes =  (dias-(anos*360))/30;
    diasRest = dias - (anos*360) - (mes*30);

    printf("%d dias equivalem a %d ano(s), %d mes(es) e %d dia(s)",dias,anos,mes,diasRest);



    return 0;
}