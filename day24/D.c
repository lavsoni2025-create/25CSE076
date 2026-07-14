#include <stdio.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0}, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 0) {
            result[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);
    return 0;
}
