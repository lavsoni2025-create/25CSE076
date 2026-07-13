#include <stdio.h>

int countSetBits(int n) {
    int count = 0;

    while (n > 0) {
        if (n & 1) {  
            count++;
        }
        n >>= 1;       

    return count;
}}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits in %d = %d\n", num, countSetBits(num));

    return 0;
}
