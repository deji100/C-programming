// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void printName() {
    printf("\nDeji Loving.");
}

void calculateSquare(int num) {
    int square = num * num;
    printf("\n%d", square);
}

int addNumber(int num1, int num2);
int squreNumber(int num2);

int main() {
    // Write C code here
    
    int result;
    
    for (int i=0; i < 10; i++) {
        printf("\n%d", i);
    };
    
    printName();
    calculateSquare(3);
    result = addNumber(2, 3);
    printf("\nResult = %d", result);
    printf("\nSquare root is %d", squareNumber(25));

    return 0;
}

int squareNumber(int num2) {
    int result = sqrt(num2);
    return result;
}

int addNumber(int num1, int num2) {
    int result = num1 + num2;
    return result;
}