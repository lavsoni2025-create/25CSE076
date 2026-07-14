#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item inv[n];

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Quantity, Price of item %d:\n", i+1);
        scanf("%d %s %d %f", &inv[i].id, inv[i].name, &inv[i].quantity, &inv[i].price);
    }

    printf("\n--- Inventory Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n",
               inv[i].id, inv[i].name, inv[i].quantity, inv[i].price);
    }

    return 0;
}
