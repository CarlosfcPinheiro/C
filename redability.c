#include <stdio.h>
#include <string.h>

float calculus(int words, int letters, int sentences){
    double result = 0.0588 * ((letters/words)*100) - 0.296 * ((sentences/words)*100) - 15.8;
    return result;
}

int main(){
    char text[100];
    int i;
    int letters;
    int words =+ 1;
    int sentences;

    printf("Insert a text to be evaluated: ");
    fgets(text, 100, stdin);

    for (i = 0; i < strlen(text); i++){
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')){
            letters++;
        }
        else if (text[i] == ' '){
            words++;
        }
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!'){
            sentences++;
        }
    }
    printf("\nLETTERS: %d", letters);
    printf("\nWORDS: %d\n", words);
    printf("SENTENCES: %d\n", sentences);

    if (calculus(words, letters, sentences) < 1){
        printf("\nBefore grade 1\n");
    }
    else if (calculus(words, letters, sentences) > 16){
        printf("\ngrade 16+\n");
    }
    else{
        printf("\nThe grade is: %.1lf\n", calculus(words, letters, sentences));
    }
    
    return 0;
}