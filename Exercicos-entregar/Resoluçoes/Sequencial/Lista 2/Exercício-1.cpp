#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    float custoEspetaculo, valorIngresso, totConvites, lucro;
    printf("Informe o custo do espetáculo R$");
        scanf("%f", &custoEspetaculo);

    printf("Informe o valor dos ingressos R$");
        scanf("%f", &valorIngresso);

    lucro = (custoEspetaculo + (custoEspetaculo*25/100))/valorIngresso;

    totConvites = custoEspetaculo/valorIngresso;

    printf("\n Para cobrir o custo do espetaculo sera necessario vender %.0f ingressos",ceil(totConvites));
    printf("\n Para cobrir o custo do espetaculo e ter lucro de 25 eh necessario vender %.0f ingressos",ceil(lucro));
    

    
        
    return 0;
}