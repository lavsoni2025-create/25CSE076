#include <stdio.h>

int frequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    return count;
}

int main() {
    int arr[10], key;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to find frequency: ");
    scanf("%d", &key);

    int freq = frequency(arr, 10, key);
    printf("Frequency of %d = %d\n", key, freq);

    return 0;
}
