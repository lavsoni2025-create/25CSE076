#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Compressed string: ");
    for (int i = 0; str[i] != '\0'; ) {
        char ch = str[i];
        int count = 0;
        while (str[i] == ch) {
            count++;
            i++;
        }
        printf("%c%d", ch, count);
    }
    printf("\n");
    return 0;
}
