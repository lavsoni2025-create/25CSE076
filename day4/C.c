#include <stdio.h>
#include <math.h>

int main() {
    int n, r, sum = 0, original;

    printf("Enter the number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        r = n % 10;               
        sum = sum + (r * r * r);  
        n = n / 10;               
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
