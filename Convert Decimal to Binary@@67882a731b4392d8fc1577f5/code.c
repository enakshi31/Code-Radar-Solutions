// Your code here...
#include <stdio.h>

void printBinary(int num) {
    int bits = sizeof(num) * 8;
    int started = 0;  // Flag to ignore leading zeros

    for (int i = bits - 1; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1;  // Set flag once the first '1' is encountered
        }
        if (started) {
            printf("%d", (num >> i) & 1);
        }
    }
    
    if (!started) {
        printf("0");  // If the number is 0, print '0'
    }
    
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
    return 0;
}
