#include <stdio.h>

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    int id[n];
    char title[n][50], author[n][50];

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Title, Author of book %d:\n", i+1);
        scanf("%d %s %s", &id[i], title[i], author[i]);
    }

    printf("\n--- Library Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", id[i], title[i], author[i]);
    }

    return 0;
}
