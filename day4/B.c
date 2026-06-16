#include <stdio.h>
int main()
{
    int n, i = 1, first, second, sum = 0;
    printf("Enter any no :");
    scanf("%d", &n);
    printf("Enter first no :");
    scanf("%d", &first);
    printf("Enter second no :");
    scanf("%d", &second);

    for (i; i <= n; i++)
    {
        sum = first + second;
        printf("%d\t", sum);
        first = second;
        second = sum;
    }
    return 0;
}
