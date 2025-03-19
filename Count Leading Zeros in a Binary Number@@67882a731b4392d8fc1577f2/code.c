#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);
    printf("%d\n", __builtin_clz(num));
    return 0;
}
