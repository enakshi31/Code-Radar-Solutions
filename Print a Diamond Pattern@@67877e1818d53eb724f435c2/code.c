// Your code here...
#include<stdio.h>
int main() {
    int n,space;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for(space=0;space<n-1;space++){
            printf(" ");
        }
        for(int j=0;j<(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (int j = 0; j < (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
}
return 0;