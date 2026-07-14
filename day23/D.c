#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int maxFreq = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if (freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", maxFreq);
    return 0;
}
