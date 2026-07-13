#include <stdio.h>

int dectobinary(int n) {
    int ans = 0, pow = 1;

    while (n > 0) {
        int r = n % 2;     
        n /= 2;            
        ans += (r * pow);  
        pow *= 10;        
    }
    return ans;
}

int main() {
    for (int i = 1; i < 10; i++) {
        printf("%d\n", dectobinary(i));
    }
    return 0;
}
