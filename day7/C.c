#include<stdio.h>

int sumof(int n) {
        
    if (n == 0)
        return 0;
    else
        return n % 10 + sumof(n/ 10);
    
    }

int main () {

    int n ;
    printf("Enter your number :");
    scanf("%d", &n);
    printf("sum of %d is = %d", n, sumof(n));
    return 0;
}