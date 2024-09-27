#include <stdio.h>

void rot(int arr[], int size) {
    if (size <= 1) {
        return; 
    }
    
    int l = arr[size - 1]; 
    
    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = l; // Place the last element at the first position
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rot(arr, size);

    printf("Array after cyclic rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
