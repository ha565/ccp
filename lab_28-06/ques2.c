#include<stdio.h>
#include<stdlib.h>

 
 
 
 int main()
 {
    int arr[10][10]={0};
    int row=2,col;
    arr[0][0]=arr[1][0]=arr[1][1]=1;
    while (row<10)
    {
       arr[row][0]=1;
       for(col=1;col<=row;col++){ 
       arr[row][col]=arr[row-1][col]+arr[row-1][col-1];
       }
       row++;

    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        
    }
    

     return 0;
 }
 