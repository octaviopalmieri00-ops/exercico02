#include <stdio.h>

int main()
{
    int hora;
    int minutos;

    printf("Digite a hora: ");
    scanf("%d", &hora);

    minutos = hora * 60;

    printf("Passaram %d minutos desde o inicio do dia", minutos);

    return 0;
}
