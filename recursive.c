#include <stdio.h>

int factorize(n);

int main() {

    int numb;

    printf("Enter a number: ");
    scanf("%d", &numb);

    factorize(5);

    return 0;
}

int factorize(n) {
    if (n > 0) {
        return n * factorize(n-1);
    }else {
        return 1;
    }
}