#include <stdio.h>

int main(void){
    char sn;

    //Input char
    printf("\nVoce gosta de musica (S = sim / N = Nao)? ");
    scanf("%c", &sn);

    //Condições
    if (sn == 'S' || sn == 's'){
        printf("Temos o mesmo gosto :)\n");
    }
    else if (sn == 'N' || sn == 'n'){
        printf("e uma pena :(\n");
    }
    else{
        printf("Essa resposta nao e adequada :/\n");
    }
    //OBS: Aspas simples são utilizadas quando se refere a valores tipo char

    system("pause");
    return 0;
}