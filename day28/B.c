#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    int n;
    printf("Enter number of accounts: ");
    scanf("%d", &n);

    struct Account a[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Account No, Name, Balance of account %d:\n", i+1);
        scanf("%d %s %f", &a[i].accNo, a[i].name, &a[i].balance);
    }

    printf("\n--- Bank Accounts ---\n");
    for (int i = 0; i < n; i++) {
        printf("AccNo: %d, Name: %s, Balance: %.2f\n", a[i].accNo, a[i].name, a[i].balance);
    }

    return 0;
}
