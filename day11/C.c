#include <stdio.h>
#include <math.h>

// Function to check prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0; 
    }
    return 1; // prime
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    return 0;
}
