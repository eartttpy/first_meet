#include <stdio.h>
int main() {
    int arr[10];
    int num1;
    int num2;
    for(int i=1;i<11;i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i-1]<arr[i]) // maximum
        {
            num1 = arr[i] ;
        }
        if (arr[i-1]>arr[i]) // minimum
        {
            num2 = arr[i] ;
        }
    }
    printf("Maximum number: %d\n", num1);
    printf("Minimum number: %d",num2);
    return 0;
}