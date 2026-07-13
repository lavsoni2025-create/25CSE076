#include <stdio.h>

void secondLargest(int arr[], int n) {
    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -1)
        printf("No second largest element (all equal).\n");
    else
        printf("Second largest element = %d\n", second);
}

int main() {
    int arr[6];
    printf("Enter 6 elements:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    secondLargest(arr, 6);
    return 0;
}
