#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20

int inputList(int arr[]) {
    int n = 0, temp;

    while (1) {
        printf("Enter a number (enter -1 to stop): ");
        scanf("%d", &temp);

        if (temp == -1) {
            break;
        }

        if (n < MAX_SIZE) {
            arr[n] = temp;
            n++;
        } else {
            printf("Array is full! Only up to %d elements allowed.\n", MAX_SIZE);
            break;
        }
    }

    return n;
}

void displayArrays(int x[], int y[], int z[], int n) {
    printf("\nIndex | x[]  | y[]  | z[]  (Product)\n");
    printf("---------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("  %d   | %d   | %d   | %d\n", i, x[i], y[i], z[i]);
    }
}

double computeSquareRootSum(int z[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += z[i];
    }

    return sqrt(sum);
}

int main() {
    int x[MAX_SIZE], y[MAX_SIZE], z[MAX_SIZE];
    int nX, nY;

    printf("Input first list (x):\n");
    nX = inputList(x);

    printf("Input second list (y):\n");
    nY = inputList(y);

    if (nX != nY) {
        printf("The lists must have the same number of elements.\n");
        return 1;
    }

    for (int i = 0; i < nX; i++) {
        z[i] = x[i] * y[i];
    }

    displayArrays(x, y, z, nX);

    double result = computeSquareRootSum(z, nX);
    printf("\nSquare root of the sum of products in z: %.2f\n", result);

    return 0;
}

