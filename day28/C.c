#include <stdio.h>

struct Ticket {
    int id;
    char passenger[50];
    char destination[50];
};

int main() {
    int n;
    printf("Enter number of tickets: ");
    scanf("%d", &n);

    struct Ticket t[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Ticket ID, Passenger Name, Destination:\n");
        scanf("%d %s %s", &t[i].id, t[i].passenger, t[i].destination);
    }

    printf("\n--- Ticket Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Ticket ID: %d, Passenger: %s, Destination: %s\n",
               t[i].id, t[i].passenger, t[i].destination);
    }

    return 0;
}
