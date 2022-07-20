//RECEBE UM NOME E IMPRIME NA TELA

#include <stdio.h> //Conjunto de funções do C

int main(void){
    //Reserva de espaço na memória para a variável
    char name[11];

    //Input
    printf("Insira seu nome: ");
    gets(name);

    //Output
    printf("Hello, %s!\n", name);

    //Pausa no sistema e retorno 0 se tudo estiver correto
    system("pause");
    return 0;
}