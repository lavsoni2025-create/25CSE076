#include <stdio.h>

int power(int x, int n) {
    int ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= x;   // multiply x repeatedly
    }

    return ans;
}

int main() {
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);

    printf("Enter exponent (n): ");
    scanf("%d", &n);

    printf("%d^%d = %d\n", x, n, power(x, n));

    return 0;
}
