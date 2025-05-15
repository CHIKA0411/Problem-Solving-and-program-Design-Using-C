#include <stdio.h>

void doubleOddElements(int* a) {
    if (*a % 2 != 0) {
        *a = *a * 2;  // Double the value if it is odd
    }
}

int main() {
    int arr[5] = {3, 6, 7, 9, 10};
    int size = 5;
    
    // Loop through the array and modify only odd elements
    for (int i = 0; i < size; i++) {
        doubleOddElements(&arr[i]);
    }
    
    // Printing the modified array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

