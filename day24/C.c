#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int maxLen = 0, currLen = 0;
    char longest[50], word[50];

    for (int i = 0, j = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            currLen = strlen(word);
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0') break;
        }
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);
    return 0;
}
