#include <stdio.h>

void studentSystem() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int roll[n]; char name[n][50]; float marks[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Marks of student %d:\n", i+1);
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++)
        printf("Roll: %d, Name: %s, Marks: %.2f\n", roll[i], name[i], marks[i]);
}

void librarySystem() {
    int n;
    printf("Enter number of books: ");
    scanf("%d", &n);
    int id[n]; char title[n][50], author[n][50];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Title, Author of book %d:\n", i+1);
        scanf("%d %s %s", &id[i], title[i], author[i]);
    }
    printf("\n--- Library Records ---\n");
    for (int i = 0; i < n; i++)
        printf("ID: %d, Title: %s, Author: %s\n", id[i], title[i], author[i]);
}

void employeeSystem() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    int id[n]; char name[n][50]; float salary[n];
    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Salary of employee %d:\n", i+1);
        scanf("%d %s %f", &id[i], name[i], &salary[i]);
    }
    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++)
        printf("ID: %d, Name: %s, Salary: %.2f\n", id[i], name[i], salary[i]);
}

int main() {
    int choice;
    do {
        printf("\n--- Mini Project Menu ---\n");
        printf("1. Student System\n2. Library System\n3. Employee System\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: studentSystem(); break;
            case 2: librarySystem(); break;
            case 3: employeeSystem(); break;
            case 4: printf("Exiting project.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
