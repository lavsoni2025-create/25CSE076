#include<stdio.h>


int fact(int n) {
    int  i;
    int factorial = 1;
    for(i = 1; i <= n; i++) {
        factorial = factorial * i;
    }

    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}
int main() {
    int a;
    printf(" Enter your number :");
    scanf("%d",&a);
    fact(a);
    return 0;
}