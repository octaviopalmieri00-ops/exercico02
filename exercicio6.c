#include <stdio.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 5 == 0)
    {
        printf("O numero e multiplo de 5");
    }
    else
    {
        printf("O numero nao e multiplo de 5");
    }

    return 0;
}
