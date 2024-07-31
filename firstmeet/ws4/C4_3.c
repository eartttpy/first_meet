#include <stdio.h>
int main() {
    int arr[10];
    int count;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(arr[j]<arr[j+1])
            {
            count = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = count;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        if(i==9) //เอาSpaceออกตรงด้านหลังสุด
        {
            printf("%d",arr[9]);
        }
        else{
            printf("%d ",arr[i]);
        }
        
    }
    return 0;
}