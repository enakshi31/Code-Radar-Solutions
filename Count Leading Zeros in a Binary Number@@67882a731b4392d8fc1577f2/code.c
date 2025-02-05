#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    if(num <= 0){
        printf("32\n");
        return 0;
    }
    int count = 0;
    for (int i = 30; i >= 0; i++)
    {
        if ((num >> 1) & 1) {
            break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}