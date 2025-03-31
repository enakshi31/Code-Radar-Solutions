#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100  // Maximum number of strings
#define MAX_LENGTH 50    // Maximum length of each string

// Function to perform selection sort on an array of strings
void selectionSort(char arr[][MAX_LENGTH], int n) {
    int i, j, minIdx;
    char temp[MAX_LENGTH];

    for (i = 0; i < n - 1; i++) {
        minIdx = i;

        // Find the lexicographically smallest string
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }

        // Swap the found minimum string with the first string
        strcpy(temp, arr[minIdx]);
        strcpy(arr[minIdx], arr[i]);
        strcpy(arr[i], temp);
    }
}

// Function to print an array of strings
void printArray(char arr[][MAX_LENGTH], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

// int main() {
//     int n;
//     char arr[MAX_STRINGS][MAX_LENGTH];

//     // Input number of strings
//     printf("Enter the number of strings: ");
//     scanf("%d", &n);
//     getchar(); // Consume the newline character left by scanf

//     // Input strings
//     printf("Enter %d strings:\n", n);
//     for (int i = 0; i < n; i++) {
//         fgets(arr[i], MAX_LENGTH, stdin);
//         arr[i][strcspn(arr[i], "\n")] = '\0'; // Remove trailing newline
//     }

//     // Display original array
//     printf("\nOriginal array:\n");
//     printArray(arr, n);

//     // Sort the strings
//     selectionSort(arr, n);

//     // Display sorted array
//     printf("\nSorted array:\n");
//     printArray(arr, n);

//     return 0;
// }
