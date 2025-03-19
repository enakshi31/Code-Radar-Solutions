// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    
    // Taking input
    scanf("%d %d", &num, &n);
    
    // Setting the nth bit using bitwise OR
    num = num | (1 << n);
    
    // Printing the updated number
    printf("%d\n", num);

    return 0;
}
