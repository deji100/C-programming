// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int factorize(n);

int main() {
    // Write C code here
    
     int numb, result;

    printf("Enter a number: ");
    scanf("%d", &numb);

    result = factorize(5);
    printf("\nResult = %d", result);
    
    return 0;
}

int factorize(n) {
    if (n > 0) {
        return n * factorize(n-1);
    }else {
        return 1;
    }
}
