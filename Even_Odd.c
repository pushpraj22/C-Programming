#include <stdio.h>

int main() {
    int number;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the remainder is 0 when divided by 2
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } 
    else {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
