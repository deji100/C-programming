#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 26;
    printf("Age: %d", age);

    double number = 12.45;
    printf("\nDouble %.2lf", number);

    float num = 10.9f;
    printf("\nFloat %.1f", num);

    bool a = true, b = false;
    printf("%d - %d", a, b);

    return 0;
}