#include <stdio.h>

#define N 12

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int roll[N] = {157, 110, 147, 122, 111, 149, 151, 141, 123, 112, 117, 133};

    quickSort(roll, 0, N - 1);

    printf("Sorted Roll Numbers using Quick Sort:\n");
    for (int i = 0; i < N; i++)
        printf("%d ", roll[i]);

    return 0;
}
