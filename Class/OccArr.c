#include <stdio.h>

int countOccurrences(int arr[], int size, int element) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {2, 4, 5, 6, 7, 2, 7, 9, 5, 2};
    int size = 10;
    int element = 2;
    int count = countOccurrences(arr, size, element);
    printf("Element %d appears %d times\n", element, count);
    return 0;
}

