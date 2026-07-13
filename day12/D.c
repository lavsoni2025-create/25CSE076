#include <stdio.h>
void isPerfect(int n) {
    int sum = 0;

    // Find divisors and add them
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Compare sum with original number
    if (sum == n)
        printf("%d is a Perfect Number.\n", n);
    else
        printf("%d is NOT a Perfect Number.\n", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    isPerfect(num);

    return 0;
}
