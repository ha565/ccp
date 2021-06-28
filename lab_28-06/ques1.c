#include <stdio.h>
#define _MAX 100
#include <stdlib.h>

int main()
{
    int mat1[_MAX][_MAX], mat2[_MAX][_MAX], sum[_MAX][_MAX];
    int row1, col1, row2, col2, row_sum, col_sum;

    printf("Enter the rows of mat1:\n");
    scanf("%d", &row1);

    printf("Enter the cols of mat1:\n");
    scanf("%d", &col1);

    printf("Enter the rows of mat2:\n");
    scanf("%d", &row2);

    printf("Enter the cols of mat2:\n");
    scanf("%d", &col2);

    if (row1!=row2||col1 !=col2)
    {
       printf("Number of rows and cols should be same for both the matrices.\n");
       exit(0);
    }
    
printf("Enter  elements of mat1:\n");
for (int i = 0; i < row1; i++)
{
    for (int j = 0; j < col1; j++)
    {
       scanf("%d",&mat1[i][j]);
    }
    
}

printf("Enter elements of mat2:\n");
for (int i = 0; i < row2; i++)
{
    for (int j = 0; j < col2; j++)
    {
        scanf("%d",&mat2[i][j]);
    }
    
}


row_sum=row2;
col_sum=col2;

for (int i = 0; i < row_sum; i++)
{
   for (int j = 0; j < col_sum; j++)
   {
       sum[i][j]=mat1[i][j]+mat2[i][j];
   }
   
}

printf("The sum of elements in the matrix is:\n");
for (int i = 0; i < row_sum; i++)
{
    printf("\n");
    for (int j = 0; j < col_sum; j++)
    {
        printf("%d\t",sum[i][j]);
    }
    
}
    return 0;
}
