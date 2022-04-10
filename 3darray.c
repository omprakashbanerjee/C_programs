#include<stdio.h>
int main()
{
    int i,row,col;
    int arr[2][2][3]={
        {1,2,3},
        {4,5,6},

        {7,8,9},
        {10,11,12}
        };
       printf("%d",arr[0][1][0]);
        /*
    for(i=0;i<2;i++)
      {
        for(row=0;row<2;row++)
        {
            for(col=0;col<3;col++)
            {
                printf("%d",arr[i][row][col]);
                 printf("  ");
            }
            printf("\n");

        }
        printf("  ");
      }
      */
      return 0;

}
