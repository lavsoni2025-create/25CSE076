#include<stdio.h>

void main()
{
    int a,b,n,temp,d,sum;

    printf("Enter starting number: ");
    scanf("%d",&a);

    printf("Enter ending number: ");
    scanf("%d",&b);

    for(n=a;n<=b;n++)
    {
        temp=n;
        sum=0;

        while(temp>0)
        {
            d=temp%10;
            sum=sum+(d*d*d);
            temp=temp/10;
        }

        if(sum==n)
            printf("%d ",n);
    }
}