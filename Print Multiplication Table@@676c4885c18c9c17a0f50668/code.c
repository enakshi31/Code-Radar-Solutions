// Your code here...
#include<stdio.h>
int main() {
    int n, pro=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        pro*=i;
    }
    printf("%d X %d",pro,i);
}