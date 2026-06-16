#include <stdio.h>

int main() {
    int sl, el, flag; 

    
    printf("Enter starting number: ");
    scanf("%d", &sl); 
    printf("Enter end number: ");
    scanf("%d", &el); 

    printf("Prime numbers between %d and %d are: \n", sl, el);

    
    for (int i = sl; i <= el; i++) {
        
        
        if (i <= 1) {
            continue; 
        }
        flag = 0; 
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1; 
                break;    
            }
        }

       
        if (flag == 0) {
            printf("%d ", i); 
        }
    }

    printf("\n");
    return 0;
}