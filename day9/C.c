#include<stdio.h>
int main() {

    int i, j ,n= 65 ;
    for ( i = 1; i <= 5; i++)
    {  
            for ( j = 0; j < i ; j++)
            {
                printf("%c",n);
                
            }
            printf("\n");n++;

    }

    return 0;
}