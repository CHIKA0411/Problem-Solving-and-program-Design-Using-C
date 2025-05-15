#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[10] = {4, 5, 8, 9, 10, 31, 13, 19, 25, 37};
    int size = 10;
    int primeCount = countPrimes(arr, size);
    printf("Total prime numbers: %d\n", primeCount);
    return 0;
}

