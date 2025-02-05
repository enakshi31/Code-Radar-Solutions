#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int mask = 1 << b;
    int result = a ^ mask;
    printf("%d\n",result);
    return 0;
}