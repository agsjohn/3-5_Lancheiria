#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int codigo, quant;
  float preco = 0;
  do {
    printf("Digite o código do produto: ");
    scanf("%i", &codigo);
    getchar();
    if (codigo != 0) {
      switch (codigo) {
      case 10:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 2.5;
        break;
      case 11:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 6;
        break;
      case 12:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 6.5;
        break;
      case 13:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 5;
        break;
      case 14:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 5.5;
        break;
      case 15:
        printf("Digite a quantidade: ");
        scanf("%i", &quant);
        preco = preco + quant * 2;
        break;
      default:
        printf("Código inválido");
      }
      getchar();
    }
  }while (codigo != 0);
  printf("\nPreço total: R$%.2f", preco);
  getchar();
}