#include <stdio.h>

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int id[n];
    char name[n][50];
    float salary[n];

    for (int i = 0; i < n; i++) {
        printf("Enter ID, Name, Salary of employee %d:\n", i+1);
        scanf("%d %s %f", &id[i], name[i], &salary[i]);
    }

    printf("\n--- Employee Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", id[i], name[i], salary[i]);
    }

    return 0;
}
