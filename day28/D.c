#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    int n;
    printf("Enter number of contacts: ");
    scanf("%d", &n);

    struct Contact c[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Name, Phone, Email of contact %d:\n", i+1);
        scanf("%s %s %s", c[i].name, c[i].phone, c[i].email);
    }

    printf("\n--- Contact Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Phone: %s, Email: %s\n", c[i].name, c[i].phone, c[i].email);
    }

    return 0;
}
