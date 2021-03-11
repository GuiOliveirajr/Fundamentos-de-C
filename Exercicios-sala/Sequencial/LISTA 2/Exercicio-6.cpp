/*Faça um programa que leia o preço de uma mercadoria com diferença de um mês
(ler o valor da mercadoria no mês passado e no mês atual) e calcule a taxa de
inflação mensal dessa mercadoria. A inflação é o percentual da diferença de preços
(atual menos o anterior) sobre o preço anterior. */

  #include <stdio.h>

  int main(void)
  {
      float valor1, valor2, porcentagem;

      printf("Informe o valor da mercadoria no mes passado: ");
      scanf("%f", &valor1);
      printf("Informe o valor da mercadoria no mes atual: ");
      scanf("%f", &valor2);

      porcentagem = ((valor2 - valor1) / valor1) * 100;
      printf("A inflação foi de %.1f%%", porcentagem);

      return 0;
  }
