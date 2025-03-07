#include <stdio.h>
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        swap(arr, i, j);
        i++;
        j--;
}
}

