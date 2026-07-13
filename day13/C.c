#include <stdio.h>

void findLargestSmallest(int arr[], int n) {
    int largest = arr[0], smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);
}

int main() {
    int arr[5];
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    findLargestSmallest(arr, 5);
    return 0;
}
