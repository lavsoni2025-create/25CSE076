#include<stdio.h>
int main() {

for (int i = 65; i <= 70; i++)
{       
    for (int j = 69; j >= i; j--)
    {
        printf(" ");
    }for (int j=65 ; j<= i ; j++)
    {
        printf("%c",j);
    }for (int j = i-1 ; j >= 65 ; j--)
    {
        printf("%c",j);
    }
    
    
    printf("\n");
}

    return 0;
} 