#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Title, Author of book %d:\n", i+1);
        scanf("%d %s %s", &b[i].id, b[i].title, b[i].author);
    }

    printf("\n--- Library Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", b[i].id, b[i].title, b[i].author);
    }

    return 0;
}
