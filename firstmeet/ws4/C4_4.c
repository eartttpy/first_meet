#include <stdio.h>
int main() {
    int arr[10]={50,30,80,10,40,90,20,70,60,100};
    int num1;
    int num2;
    int i;
    scanf("%d",&num1);
    for(i=0;i<10;i++)
    {
        if(num1==arr[i]) 
        {
            num2=arr[i];
        }
        else
        {
            printf("Value %d not  found in the array", num1);
        }
    if(num1==arr[i]) 
    {
            num2=arr[i];
        }
    }
    printf("Value %d found at index %d", num2,i);
    return 0;
}