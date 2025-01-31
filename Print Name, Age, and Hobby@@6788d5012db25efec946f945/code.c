#include <stdio.h>

int main() {
    char a[64],b[64];
    int c;
    scanf("%s %d",&a,&c);
    scanf("%s",&b);
    printf("Name: %s\nAge: %d\nHobby: %s ",a,c,b);
    return 0;
}