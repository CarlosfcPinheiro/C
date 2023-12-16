#include <stdio.h>

long num;

long cube_number(long num){
    long result = num*num*num;
    return result;
}

int main(){
    printf("Insert a number: ");
    scanf("%ld", &num);

    printf("This is the cube of the number %ld: %ld\n", num, cube_number(num));
    return 0;
}