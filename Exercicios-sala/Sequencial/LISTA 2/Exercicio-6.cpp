/*Fa�a um programa que leia o pre�o de uma mercadoria com diferen�a de um m�s
(ler o valor da mercadoria no m�s passado e no m�s atual) e calcule a taxa de
infla��o mensal dessa mercadoria. A infla��o � o percentual da diferen�a de pre�os
(atual menos o anterior) sobre o pre�o anterior. */

  #include <stdio.h>

  int main(void)
  {
      float valor1, valor2, porcentagem;

      printf("Informe o valor da mercadoria no mes passado: ");
      scanf("%f", &valor1);
      printf("Informe o valor da mercadoria no mes atual: ");
      scanf("%f", &valor2);

      porcentagem = ((valor2 - valor1) / valor1) * 100;
      printf("A infla��o foi de %.1f%%", porcentagem);

      return 0;
  }
