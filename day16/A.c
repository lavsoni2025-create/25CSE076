#include <stdio.h>

int findMissing(int arr[], int n) {
    int total = n * (n + 1) / 2;   
    int sum = 0;

    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];             
    }

    return total - sum;            // Missing number
}

int main() {
    int a;
    printf("Enter the no of term in array :\n");
    scanf("%d",&a);
    int arr[a] ;  
    printf("Enter the array :");                                     // Numbers should be from 1 to 6
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Missing number: %d\n", findMissing(arr, a));
    return 0;
}
