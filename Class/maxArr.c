#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];  // Start with the first element as the maximum
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[10] = {4, 5, 8, 9, 10, 31, 13, 19, 25, 37};
    int size = 10;
    int max = findMax(arr, size);
    printf("Maximum value: %d\n", max);
    return 0;
}

