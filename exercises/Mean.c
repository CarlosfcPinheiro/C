//TIRA A MÉDIA DE 2 NÚMEROS

#include <stdio.h>

int main(void){
    //Reservando espaço na memória para todas as variáveis
    float num1, num2, mean;

    //Input
    printf("\nDigite o primeiro numero: ");
    scanf("%f", &num1); //O & permite acessar e alterar uma variável

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    //Calculo de Média e Output
    mean = (num1 + num2) / 2;
    printf("\nA sua media e: %.1f\n", mean);

    system("pause");
    return 0;
}