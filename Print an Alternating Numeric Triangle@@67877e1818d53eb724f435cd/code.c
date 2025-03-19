// Your code here...
#include <stdio.h>
int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        int num = (i % 2 == 1) ? 1 : 0;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            if (j < i) {
                printf(" "); 
            }
            num = 1 - num;
        }
        printf("\n");
    }
    return 0;
}
