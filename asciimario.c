#include <stdio.h>

int main(){
    //set variables
    int choice;
    int size;
    int i;
    int t;
    int c;
    int count;

    printf("\n(1) Mystery blocks");
    printf("\n(2) Wall");
    printf("\n(3) Block");
    printf("\n(4) Stairs");

    // Loop to unexpected inputs
    do
    {
        printf("\nInput a number to make a mario's element: ");
        scanf("%d", &choice);
    } while (choice > 4 || choice < 1);

    // Loop to unexpected size
    do{
        printf("Input a size to the mario's element that you choose: ");
        scanf("%d", &size);
    }while (size <= 0);

    printf("\nHere it is: \n");
    // Cases sequences
    if (choice == 1){
        for (i = 0; i < size; i++){
            printf("?");
        }
        
    }
    else if (choice == 2){
        for (i = 0; i < size; i++){
            printf("#\n");
        }
    }
    else if (choice == 3){
        for (i = 0; i < size; i++){
            for (t = 0; t < size; t++){
                printf("#");
            }
            printf("\n");
        }
    }
    else{
        count = size-1;
        for (c = 0; c < size; c++){
            for (i = size-c-1; i != 0; i--){
            printf(" ");

            }
            for (t = 0; t < size-count; t++){
                printf("#");
            }
            printf("\n");
            count--;
        }
    }

    printf("\n");
    printf("\n");
    return 0;
}