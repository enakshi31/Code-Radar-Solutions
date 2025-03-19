// Your code here...
#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("%c", 'A' + j);
            if (j < i - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
