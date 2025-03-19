#include <stdio.h>

int main() {
    int n, i, j, space;

    // Taking input
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces to center the numbers
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing numbers from 1 to i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}

