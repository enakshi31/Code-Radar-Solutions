#include <stdio.h>

int main() {
    char n;
    scanf("%c",&n);
    if(isdigit(n))
    {
        printf("Digit");
    }
    else if (isalpha(n))
    {
        n = tolower(n);
        if (n == 'a' || n == 'e' || n == 'i' || n == 'o' || n == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } else {
        printf("Special Character\n");
    }
    return 0;
}