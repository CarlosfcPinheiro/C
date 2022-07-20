//Simula um caixa eletrônico
#include <stdio.h>

int main(void){
    float value, c25, c10, c5, c1, centsvalue, deposit;

    //Input
    do
    {
        printf("Diga quanto voce deseja sacar em moedas: ");
        scanf("%f", &value);
    } while (value <= 0);

    centsvalue = value*100;

    while(deposit != centsvalue){
        if(deposit+25 > centsvalue){
            if(deposit+10 > centsvalue){
                if(deposit+5 > centsvalue){
                    deposit += 1;
                    c1 += 1;
                }
                else{
                    deposit += 5;
                    c5 += 1;
                }
            }
            else{
                deposit += 10;
                c10 += 1;
            }
        }
        else{
            deposit += 25;
            c25 += 1;
        }
    }
    printf("\nA quantidade de moedas recebidas, foram:\n");
    printf("25 Centavos: %.0f\n", c25);
    printf("10 Centavos: %.0f\n", c10);
    printf("5 Centavos: %.0f\n", c5);
    printf("1 Centavo: %.0f\n", c1);

    system("pause");
    return 0;
}