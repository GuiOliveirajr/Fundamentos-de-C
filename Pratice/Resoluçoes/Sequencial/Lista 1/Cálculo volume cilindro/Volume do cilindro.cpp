//Aluno: eguinaldo couras de oliveira junior.
//O código a seguir calcula o volume de um cilindro.

#include <stdio.h>
#include <stdlib.h>

int main(void){
    const double pi = 3.1415;
    float raio, altura, volume;


 printf("CALCULE O VOLUME DO CILINDRO");
 printf("\n\n Informe o raio do cilindro em cm: ");
    scanf("%f",&raio);
 printf("\n Informe a altura do cilindro em cm: ");
    scanf("%f",&altura);

 volume = (pi*raio*raio)*altura;

 printf("\n O volume do cilindro é %.2fcm",volume);




return(0);
}
