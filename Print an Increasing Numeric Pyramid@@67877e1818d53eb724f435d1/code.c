// Your code here...
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for (int s = 0; s < N - i; s++) {
            printf(" ");
        }
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}