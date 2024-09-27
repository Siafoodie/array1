#include <stdio.h>

void f(int arr[], int size) {
    printf("Duplicates in the array: ");
    int fo = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                fo = 1;
                break; // To avoid printing the same duplicate again
            }
        }
    }

    if (!fo) {
        printf("No duplicates found.");
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    f(arr, size);

    return 0;
}



