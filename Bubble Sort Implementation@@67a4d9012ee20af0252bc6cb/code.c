#include<stdio.h>
void bubbleSort(int arr[], int n){
    int i,j,temp;
    int swapped;
    for (int i=0;i<n-1;i++){
        swapped = 0;
        for (int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        break;
    }
}

void printArray (int arr[], int n) {
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     bubbleSort(arr,n);
//     printArray(arr,n);
//     return 0;
// }

