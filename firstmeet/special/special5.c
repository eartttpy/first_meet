#include <stdio.h>
int main() {
    int matrix[3][3];
    int num1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
            if(i==0&&j==0)
            {
                num1 = matrix[0][0];
            }
            if (num1<matrix[i][j]) // maximum
            {
                num1 = matrix[i][j] ;
            }
        }
    }
    printf("The maximum value in the matrix is: %d", num1);
    return 0;
}