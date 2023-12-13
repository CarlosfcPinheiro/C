#include <stdio.h>
#include <math.h>

void print_result(double result);

int main(){

    int choice;
    double x;
    double y;
    double result;
    char answer[1];


    while (1){
        printf("\nInsert a number to x: ");
        scanf("%lf", &x);
        printf("Insert other number to y: ");
        scanf("%lf", &y);

        do{
            printf("\n[1] Sum");
            printf("\n[2] Subtract");
            printf("\n[3] Multiply");
            printf("\n[4] Division");
            printf("\n[5] Pow");
            printf("\n[6] Logarithmic");
            printf("\nChoose an operation: ");
            scanf("%d", &choice);

        }while (choice > 6 || choice < 1);
        
        if (choice == 1){
            result = x + y;
            print_result(result);
        }
        else if (choice == 2){
            result = x - y;
            print_result(result);
        }
        else if (choice == 3){
            result = x*y;
            print_result(result);
        }
        else if (choice == 4){
            result = x/y;
            print_result(result);
        }
        else if (choice == 5){
            result = pow(x,y);
            print_result(result);
        }
        else{
            result = log(x)/log(y);
            print_result(result);
        }

    }

    return 0;
    
}

void print_result(double result){
        printf("\nThis is your result: %.2lf\n", result);
} 
