#include <stdio.h>

int main()
{
    float comprimento;
    float largura;
    float area;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);

    area = comprimento * largura;

    printf("A area do terreno e %.2f", area);

    return 0;
}
