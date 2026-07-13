#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int found = 0;
    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                found = 1;
                break; // avoid printing same duplicate multiple times
            }
        }
    }
    if (!found)
        printf("None");
    printf("\n");
}

int main() {
    int arr[8];
    printf("Enter 8 elements:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    findDuplicates(arr, 8);
    return 0;
}
