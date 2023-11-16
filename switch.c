// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int main() {    
    int i;
    
    printf("Enter a number: ");
    scanf("%d", &i);
    
    switch(i) {
        case 2:
        printf("Correct, you inputed 2.");
        break;
        
        case 3:
        printf("Correct, you inputed 3.");
        break;
        
        default:
        printf("Incorrect, you inputed the wrong number.");
        break;
    };

    return 0;
}