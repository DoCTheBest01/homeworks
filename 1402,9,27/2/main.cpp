#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    printf("Enter A Number: ");
    scanf("%d", &n);

    for (int l = (n / 2)+1; l > 0; --l) {
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
