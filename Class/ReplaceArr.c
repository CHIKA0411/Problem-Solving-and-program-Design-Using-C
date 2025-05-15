#include <stdio.h>

void replaceNegative(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int arr[10] = {3, -8, 5, -14, -23, -34, 56, 76, -89, 100};
    int size = 10;
    
    replaceNegative(arr, size);
    
    // Printing the modified array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

