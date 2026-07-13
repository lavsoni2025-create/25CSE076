#include<stdio.h>
int sum( int a, int b ) {
    int s = a+b;
    return s;
}
int main() {
int n,m;
printf("Enter 1st no :");
scanf("%d",&n);
printf("Enter 2st no :");
scanf("%d",&m);
printf("sum = %d ",sum(n,m));
    return 0;
}