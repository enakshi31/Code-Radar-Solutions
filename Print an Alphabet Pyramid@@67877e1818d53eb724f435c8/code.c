// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    char ch;

    // Taking input
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        ch = 'A'; // Reset character to 'A' for each row

        // Printing characters with spaces
        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            if (j < i) {
                printf(" "); // Add space between letters
            }
            ch++; // Move to next character
        }

        printf("\n"); // Move to the next line
    }

    return 0;
}
