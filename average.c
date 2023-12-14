#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int sum;

    do{
        printf("Insert a number of grades to insert: ");
        scanf("%d", &n);
    }while(n <= 0);    

    int grade[n];

    for(i = 0; i < n; i++){
        printf("Add a grade: ");
        scanf("%d", &grade[i]);

        sum += grade[i];
    }

    printf("\nThis is the average: %.2f\n", (float) sum/n);
}