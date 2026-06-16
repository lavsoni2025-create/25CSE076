#include <stdio.h>
int main()
{
    int  i = 0, first =0, second = 1, sum = 0;
   printf("0\t");
    for (i; i <= 4; i++)
    {
        sum = first + second;
        printf("%d\t", sum);
        first = second;
        second = sum;

    }
    return 0;
}
