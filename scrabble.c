#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int i;
    int score_player1;
    int score_player2;

    char word1[20];
    char upper1[20];
    char word2[20];
    char upper2[20];

    const int points[] = {
        1, 3, 3, 2, 1,
        4, 2, 4, 1, 8,
        5, 1, 3, 1, 1,
        3, 10, 1, 1, 1,
        1, 4, 4, 8, 8, 10};

    printf("(PLAYER 1) Insert a word: ");
    scanf("%s", &word1);

    printf("(PLAYER 2) Insert a word: ");
    scanf("%s", &word2);

    for (i=0; i < strlen(word1); i++){
        upper1[i] = toupper(word1[i]);
        score_player1 += points[upper1[i] - 65]; 
    }

    for (i=0; i < strlen(word2); i++){
        upper2[i] = toupper(word2[i]);
        score_player2 += points[upper2[i] -65];

    }
    if (score_player1 > score_player2){
        printf("PLAYER 1 WINS!!\n");
    }
    else if (score_player2 > score_player1){
        printf("PLAYER 2 WINS!!\n");
    }
    else{
        printf("DRAW...\n");
    }
    printf("\nP1 points: %d", score_player1);
    printf("\nP2 points: %d\n", score_player2);

    return 0;
}