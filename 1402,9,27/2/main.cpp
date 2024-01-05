#include <stdio.h>

int main() {
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);
// in case of 7, l = (7 / 2) + 1 = 3.5 + 1 = 4


    for (int l = (n / 2) + 1; l > 0; --l) {
        // Print spaces before the '*' to create the triangular shape
        for (int i = 0; i < n / 2 - l + 1; ++i) {
            printf("   ");
        }

        // Print '*' characters for the current row
        for (int j = 0; j < 2 * l - 1; ++j) {
            printf("  *");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
