/*Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h
para arredondar o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o
 consumo médio do veículo, calcule e mostre as informações solicitadas. */

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
