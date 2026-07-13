#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int index = 0;

    // Move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }

    // Fill remaining positions with zero
    while (index < n) {
        arr[index++] = 0;
    }

    printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[8];
    printf("Enter 8 elements:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }
    moveZeroes(arr, 8);
    return 0;
}
