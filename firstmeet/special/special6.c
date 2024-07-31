#include <stdio.h>
int main() {
    int arr[10];
    int num1;
    int count = 0;
    int max_count = 0;
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                count +=  1;
                
            }
        }
        if(max_count>count)
            {
                
            }
    }
    

    printf("Mode = %d", count);
    return 0;
}