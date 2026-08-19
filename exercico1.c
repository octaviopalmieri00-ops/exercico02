/* Algoritmos e Programação II
   Exercício 2
   Quantidade de salários minímos */

#include <studio.h>

int main()
{
  int a;
  int b;
  int div;
  int resto;

  printf("Digite o salário minímo atual: ");
  scanf("%d , &a);

  printf("Digite o salário bruto: ");
  scanf("%d , &b);

  div = a / b;

  printf("Quantidade de salário minímo = %d", div);

  return 0;
}
