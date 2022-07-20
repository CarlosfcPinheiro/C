#include <stdio.h>

int main(void){
    //Criando espaço na memória e determinando variável
    int age, upper;
    upper = 18;

    //Input
    printf("\nDigite sua idade: ");
    scanf("%i", &age);

    //Condições
    if (age > upper){
        printf("Voce possui mais de 18 anos, voce ja e de MAIOR.\n");
    }
    else if (age < upper){
        printf("Voce nao possui 18 anos, voce e de MENOR.\n");
    }
    else{
        printf("Voce possui 18 anos, voce ja e de MAIOR.\n");
    }

    system("pause");
    return 0;
}