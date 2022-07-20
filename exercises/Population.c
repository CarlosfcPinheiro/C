// Vai calcular o crescimento populacional de uma certa população em um determinado intervalo de tempo
#include <stdio.h>

int main(void)
{
    int startsize, endsize, years, growth, yearly;
    char population[9];
    years = 0;

    printf("\nForneca o NOME do que e formada sua populacao: ");
    gets(population);

    do
    {
        printf("Forneca o TAMANHO INICIAL dessa populacao: ");
        scanf("%i", &startsize);
        printf("Agora, forneca o TAMANHO FINAL dessa populcao: ");
        scanf("%i", &endsize);
    } while (startsize < 9 || endsize <= startsize);

    yearly = (startsize / 3) - (startsize / 4);
    growth = yearly + startsize;

    do
    {
        growth += yearly;
        years += 1;
    } while (growth < endsize);

    printf("\nPOPULACAO: %s\n", population);
    printf("CRESCIMENTO ANUAL: %i\n", yearly);
    printf("ANOS NESCESSARIOS PARA ATINGIR %i: %i\n", endsize, years);

    system("pause");
    return 0;
}