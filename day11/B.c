#include<stdio.h>
void max(int a , int b) {
    if (a>b)
    {
       return printf(" %d is greater <-",a); 
    }else 
       return printf("%d is grater <-", b);
    
}
int main() {
    int n,m;
    printf("Enter 1st no :");
    scanf("%d",&n);
    printf("Enter 2nd no :");
    scanf("%d",&m);
    max(n,m);
    return 0;
}