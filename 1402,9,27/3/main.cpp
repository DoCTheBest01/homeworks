#include <stdio.h>

int main() {
    int h;

    printf("Enter a number: ");
    scanf("%d", &h);

    // Draw the mirrored right-angled triangle
    for (int i = 1; i <= h; ++i) {
        // Print spaces before the '*' to create the mirrored effect
        for (int j = 1; j < i; ++j) {
            printf("   ");
        }

        // Print '*' characters for the current row
        for (int j = i; j <= h; ++j) {
            printf("*  ");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}
