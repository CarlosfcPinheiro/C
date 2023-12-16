#include <stdio.h>
#include <string.h>

char text[20];
char upper[20];
int i;

int main(){
    printf("Type it a word or a phrase: ");
    fgets(text, 20, stdin);

    for (i=0; i < strlen(text); i++){
        if (text[i] >= 'a' && text[i] <= 'z'){
            upper[i] = text[i] - 32;
        }
        else{
            upper[i] = text[i];
            continue;
        }
    }
    printf("\nThe size of the string: %d\n", strlen(text)-1);
    printf("The text in uppercase: %s\n", upper);
    return 0;
}