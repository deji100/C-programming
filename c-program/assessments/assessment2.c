// #include <stdio.h>
// #include <conio.h>

// void main()
// {
//     system("cls");

//     char ch;
//     char A = 'A', Z = 'Z', a = 'a', z = 'z';
//     int i;

//     printf("Enter a Character: ");

//     scanf("%c", &ch);

//     if ((int)ch >= (int)A && (int)ch <= (int)Z)
//         printf("%c-%d is within the range of A-Z", ch, ch);
//     else if ((int)ch >= (int)a && (int)ch <= (int)z)
//         printf("%c-%d is within the range of a-z", ch, ch);
//     else
//     {
//         i = (int)ch;
//         printf("%d is within the range of 1-9", i);
//     }
// }

#include <stdio.h>
#include <stdlib.h>  // For system("cls")

int main() {
    system("cls");  // Clear the screen (Windows specific)

    char ch;
    char A = 'A', Z = 'Z', a = 'a', z = 'z';

    printf("Enter a Character: ");
    scanf("%c", &ch);

    if (ch >= A && ch <= Z) {
        printf("%c-%d is within the range of A-Z\n", ch, ch);
    } else if (ch >= a && ch <= z) {
        printf("%c-%d is within the range of a-z\n", ch, ch);
    } else if (ch >= '0' && ch <= '9') {  // Additional condition for digits
        printf("%c-%d is within the range of 0-9\n", ch, ch);
    } else {
        printf("%c-%d is a special character or non-alphabetic, non-numeric character\n", ch, ch);
    }

    return 0;
}
