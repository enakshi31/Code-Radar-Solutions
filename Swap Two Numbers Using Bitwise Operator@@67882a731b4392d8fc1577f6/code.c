// Your code here...
#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input
    scanf("%d %d", &a, &b);
    
    // XOR swap algorithm
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Printing swapped values
    printf("%d %d\n", a, b);

    return 0;
}
