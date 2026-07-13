#include <stdio.h>
int main() {
    int arr[5], sum = 0, avg;
    printf("Enter array elements:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    int length = sizeof(arr) / sizeof(arr[0]); // number of elements
    avg = sum / length;

    printf("Sum of array = %d\nAverage of array = %d\n", sum, avg);
    return 0;
}
