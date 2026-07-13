#include<stdio.h>
int main() {

    int arr[5];
    printf("Enter array elements :");  // for input the arry
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d",&arr[i]);
    }
     // for display the array
     printf("your array element :");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}