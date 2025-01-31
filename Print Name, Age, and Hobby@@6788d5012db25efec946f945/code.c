#include <stdio.h>

int main() {
    char a[64],b[64];
    int c;
    scanf("%[^] %d",&a,&c);
    scanf("%[^\n]",&b);
    printf("Name: %s\nAge: %d\nHobby: %s ",a,c,b);
    return 0;
}