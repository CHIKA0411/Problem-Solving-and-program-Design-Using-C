#include <stdio.h>

void multiplyByFactor(int* a, int factor) {
    *a = *a * factor;  // Multiply the value by the factor
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factor = 2;
    int size = 10;
    
    // Loop through the array and apply multiplication factor
    for (int i = 0; i < size; i++) {
        multiplyByFactor(&arr[i], factor);
    }
    
    // Printing the modified array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

