// Your code here...
#include <stdio.h>
void selectionSort(char arr[], int n) {
    int i, j, minIdx;
    char temp;
    
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}
void printArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

// int main() {
//     char arr[] = {'d', 'b', 'e', 'a', 'c'};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     selectionSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }
