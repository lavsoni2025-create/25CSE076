#include <stdio.h>
#include <math.h>

void armst(int a) {
    int original = a, digit, number = 0;

    while (a != 0) {
        digit = a % 10;
        number = number + (int)pow(digit, 3); // cast to int
        a = a / 10;
    }

    printf("Calculated sum of cubes = %d\n", number);

    if (number == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
}

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    armst(n);
    return 0;
}
