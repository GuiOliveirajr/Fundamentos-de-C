/*Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro. (Use a fun��o ceil() da biblioteca math.h
para arredondar o valor para cima)
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o
 consumo m�dio do ve�culo, calcule e mostre as informa��es solicitadas. */

 #include <stdio.h>
 #include <math.h>

 int main(void)
 {
     float km, capacidade, consumo, litros, tanques, sobra;

     printf("Informe a distancia percorrida entre as cidades: ");
     scanf("%f", &km);
     printf("Informe a capacidade do tanque de combustivel: ");
     scanf("%f", &capacidade);
     printf("Informe o consumo medio do veiculo: ");
     scanf("%f", &consumo);

     litros = km / consumo;
     printf("\nForam necessarios %.1f litros de combustivel", litros);

     tanques = ceil (km / (consumo * capacidade));
     printf("\nForam necessarios %.1f tanques de combustivel", tanques);

     sobra = (capacidade * tanques) - litros;
     printf("\nSobrou: %.1f litros", sobra);


     return 0;







 }
