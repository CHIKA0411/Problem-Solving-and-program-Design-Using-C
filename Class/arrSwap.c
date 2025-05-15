/*WAP using function swapElements that swaps first two elements of an array by accepting their addresses as arguments.*/
#include <stdio.h>

// Function to swap two elements using their addresses
void swapElements(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Initialize the array
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Printing the array before swapping
    printf("Before swapping:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Call the function to swap the first two elements
    swapElements(&arr[0], &arr[1]);
    
    // Printing the array after swapping
    printf("After swapping:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

