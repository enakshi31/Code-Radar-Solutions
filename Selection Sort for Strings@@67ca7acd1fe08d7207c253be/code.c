// Your code here...
#include <stdio.h>
#include <string.h>
void selectionSort(char arr[][50], int n) {
    int i, j, minIdx;
    char temp[50];

    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIdx]) < 0) {
                minIdx = j;
            }
        }
        strcpy(temp, arr[minIdx]);
        strcpy(arr[minIdx], arr[i]);
        strcpy(arr[i], temp);
    }
}
void printArray(char arr[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

// int main() {
//     char arr[][50] = {"banana", "apple", "cherry", "blueberry", "grape"};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array:\n");
//     printArray(arr, n);

//     selectionSort(arr, n);

//     printf("\nSorted array:\n");
//     printArray(arr, n);

//     return 0;
// }
