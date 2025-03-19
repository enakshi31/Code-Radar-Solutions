// Your code here...
#include <stdio.h>

int main() {
    int a, b;

    // Taking input
    scanf("%d %d", &a, &b);

    // Checking if both numbers have the same sign
    if ((a >= 0 && b >= 0) || (a < 0 && b < 0)) {
        printf("Same Sign\n");
    } else {
        printf("Different Sign\n");
    }

    return 0;
}
