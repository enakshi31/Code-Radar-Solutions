// Your code here...
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

void caesarCipher(char *message, int shift) {
    for (int i = 0; message[i] != '\0'; i++) {
        char ch = message[i];

        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            message[i] = (ch - base + shift) % 26 + base;
        }
    }
}

// int main() {
//     char message[1000];
//     int shift;

//     // Read input
//     fgets(message, sizeof(message), stdin);
//     scanf("%d", &shift);

//     // Encrypt the message
//     caesarCipher(message, shift);

//     // Print the encrypted message
//     printf("%s", message);

//     return 0;
// }
