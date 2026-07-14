#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++) {
        printf("Enter ID, name, salary of employee %d:\n", i+1);
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
