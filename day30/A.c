#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int roll[n];
    char name[n][50];
    float marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Roll, Name, Marks of student %d:\n", i+1);
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}
