#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char msg[20];
    int j;
    int i;
    int num;
    int bits[] = {128, 64, 32, 16, 8, 4, 2, 1};

    printf("Input a message: ");
    fgets(msg, 20, stdin);

    for (i=0; i < strlen(msg) - 1; i++){
        num = msg[i];
        j = 0;
        do{
            if (num >= bits[j]){
                printf("🟡");
                num -= bits[j];
            }
            else{
                printf("⚫");
            }
            j++;
        }while (j < 8);
        printf("\n");
    }

    return 0;
}