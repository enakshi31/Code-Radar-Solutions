// Your code here...
#include<stdio.h>
int main() {
    int num,i,prime=1;
    scanf("%d",&num);
    for (i=2;i *i <= num;i++) {
        if (num % i == 0) {
            prime = 0;
            break;
        }
    }
    if (num == 1 || !prime)
    printf("Not Prime");
    else
    printf("Prime");
    return 0;
    
}