#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Welcome to Quiz!\n");

    printf("Q1: What is the capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata  4. Chennai\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q2: Who is known as the father of C language?\n");
    printf("1. Dennis Ritchie  2. James Gosling  3. Bjarne Stroustrup  4. Guido van Rossum\n");
    scanf("%d", &ans);
    if (ans == 1) score++;

    printf("Q3: What is 5 * 6?\n");
    printf("1. 11  2. 30  3. 56  4. 25\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Your final score: %d/3\n", score);

    return 0;
}
