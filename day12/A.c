#include<stdio.h>
void ispalindrome(int a) {
    int  original, reverse = 0, digit;
    original = a;

    while (a != 0) {
        digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }

    if (original == reverse)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");
}
int main() {
    int n;
    printf("Enter your number :");
    scanf("%d",&n);
    ispalindrome(n);
    return 0;
}