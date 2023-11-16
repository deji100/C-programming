// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>

int main() {
    // Write C code here
    
    char alpha = 'e';
    char upper = toupper(alpha);
    
    printf("Upper: %c", upper);
    
    char lower = tolower(upper);
    printf("\nLower: %c", lower);
    
    return 0;
}