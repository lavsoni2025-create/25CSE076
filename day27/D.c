#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll and name of student %d:\n", i+1);
        scanf("%d %s", &s[i].roll, s[i].name);

        s[i].total = 0;
        for (int j = 0; j < 5; j++) {
            printf("Enter marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = s[i].total / 5.0;
    }

    printf("\n--- Marksheet ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Total: %d, Percentage: %.2f%%\n",
               s[i].roll, s[i].name, s[i].total, s[i].percentage);
    }

    return 0;
}
