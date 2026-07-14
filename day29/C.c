#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int choice, i, len, vowels;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Count Vowels\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %d\n", (int)strlen(str));
                break;
            case 2:
                len = strlen(str);
                for (i = 0; i < len; i++) rev[i] = str[len-i-1];
                rev[len] = '\0';
                printf("Reversed string: %s\n", rev);
                break;
            case 3:
                vowels = 0;
                for (i = 0; str[i] != '\0'; i++) {
                    char ch = str[i];
                    if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                        ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                        vowels++;
                }
                printf("Number of vowels = %d\n", vowels);
                break;
            case 4:
                printf("Exiting string system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
