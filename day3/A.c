#include<stdio.h>
int main() {
    int n,i,flag=0;
printf("Enter any no 1-100 :");
scanf("%d",&n);
if (n<=1)
{
    printf("%d is not a prime no",n);
}


    for ( i=n/2; i>=2; i--)
    {
        if (n%i==0)
        {
            flag =1;
            break;
        }
        
    }
  if (flag==0)
  {
    printf("%d is a prime no",n);
  }else{
     printf("%d is not a prime no",n);
  }
    return 0;
}