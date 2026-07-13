#include <stdio.h>

int main() {
    int ans = 0, pow = 1, n, r;

    printf("Enter the binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        r = n % 10;        
        ans += r * pow;    
        pow *= 2;         
        n /= 10;           
    }

    printf("Decimal number is: %d", ans);

    return 0;
}
