#include <stdio.h>

void Max(int arr[], int size, int *min, int *max) {
    
    *min = arr[0];
    *max = arr[0];
    
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
        if (arr[i] > *max) {
            *max = arr[i]; 
        }
    }
}

int main() {
    int arr[] = {3, 2, 1, 56, 10000, 167};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    Max(arr, size, &min, &max);

    printf("%d %d\n", min, max); 

    
    int arr2[] = {1, 345, 234, 21, 56789};
    size = sizeof(arr2) / sizeof(arr2[0]);

   Max(arr2, size, &min, &max);
    printf("%d %d\n", min, max); 

    // Example with a single element
    int arr3[] = {56789};
    size = sizeof(arr3) / sizeof(arr3[0]);

    Max(arr3, size, &min, &max);
    printf("%d %d\n", min, max); // Output: 56789 56789

    return 0;
}