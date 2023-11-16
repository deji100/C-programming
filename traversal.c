// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a[50], size, i;
    
    printf("Enter array size: ");
    
    scanf("%d", &size);
    
    printf("Enter array elements");
    
    for (i=0; i < size; i++) {
        scanf("%d", &a[i]);
    };
    
    printf("Elements in array are");
    
    for (i=0; i < size; i++){
        printf("%d", a[i]);
    }
    
    return 0;
}