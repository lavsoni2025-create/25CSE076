#include<stdio.h>
int main() {

    int i, j , n = 65;
    for ( i = 2; i <= 6; i++)
    {  
            for ( j = 1; j < i ; j++)
            {
                printf("%c",n);
                n++;
            }
            printf("\n");

    }

    return 0;
}