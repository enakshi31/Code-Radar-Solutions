#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d",&a,&b,&c);
    if ((a+b)>c)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
    return 0;
}