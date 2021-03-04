//Aluno: eguinaldo couras de oliveira junior.
//calculo de KW

#include <stdio.h>
#include <stdlib.h>


int main(void){

    float salarioMin, kwGasto, valorKw;

    printf("  Informe o salario minimo atual: R$");
    scanf("%f",&salarioMin);
    printf("  Qual a quantia de quilowatts gasto na residencia:");
    scanf("%f",&kwGasto);
    printf("\n \n" );

    printf("  Os valores encontados sao:\n \n" );
    valorKw = (salarioMin/7)/100;

    printf("    Valor atual do quilowatt KW: R$ %f \n \n",valorKw);
    printf("    Valor a ser pago pela residencia: R$ %f \n \n",kwGasto*valorKw);
    printf("    Valor a ser pago com 10 de desconto: R$ %f :\n \n",(kwGasto*valorKw) - (kwGasto*valorKw)*0.10);


    return(0);
}
