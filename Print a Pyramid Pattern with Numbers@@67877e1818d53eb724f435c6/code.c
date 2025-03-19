// Your code here...
#include <stdio.h>

int main() {
    int n, i, j, space;

    // Taking input
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Printing spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing numbers
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d ", j);
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
