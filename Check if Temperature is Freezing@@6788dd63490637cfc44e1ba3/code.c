// Your code here...
#include <stdio.h>

int main() {
    int temperature;

    // Taking input
    scanf("%d", &temperature);

    // Checking if temperature is freezing
    if (temperature <= 0) {
        printf("Freezing\n");
    } else {
        printf("Above Freezing\n");
    }

    return 0;
}
