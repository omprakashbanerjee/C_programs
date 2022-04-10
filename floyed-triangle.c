#include<stdio.h>
int main()
{
    int i,n=1,j,rows;
    printf("enter the nmbr of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
