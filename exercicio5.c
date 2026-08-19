#include <stdio.h>

int main()
{
    float salariominimo;
    float dolar;
    float dinheiro;
    float casa;
    int casas;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salariominimo);

    printf("Digite o valor do dolar: ");
    scanf("%f", &dolar);

    dinheiro = 10000000 * dolar;

    casa = 150 * salariominimo;

    casas = dinheiro / casa;

    printf("Quantidade de casas que podem ser construidas: %d", casas);

    return 0;
}
