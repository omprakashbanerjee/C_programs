#include<stdio.h>
#define max 50
int main()
{    int sum=0,k,product[max][max];
    int i,j,a[max][max],b[max][max];
    int arows,brows,acolumn,bcolumn;
    printf("enter the number of rows and columns of matrix a ");
    scanf("%d %d",&arows,&acolumn);
     printf("enter the number of rows and columns of matrix b ");
    scanf("%d %d",&brows,&bcolumn);


    if(brows!=acolumn)
     {
         printf("matrix a and matrix b cant be multiplied");
    }
    else
    {
        //printf("\n");
        printf("enter the elements of matrix a \n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<acolumn;j++)
            {
               // printf("enter a[%d][%d] ",i,j);
                scanf("%d",&a[i][j]);
            }
        }

        printf("enter the elements of matrix b \n");
        for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumn;j++)
            {
             //   printf("enter b[%d][%d] ",i,j);
                scanf("%d",&b[i][j]);
            }
        }

        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumn;j++)
            {
                for(k=0;k<brows;k++)
                {
                    sum +=a[i][k]*b[k][j];
                }
                product[i][j]=sum; sum=0;

            }

        }

    printf("resultant matrix is \n");
    for(i=0;i<arows;i++)
    {
        for(j=0;j<bcolumn;j++)
        {
        printf("%d ",product[i][j]);
        }printf("\n");
    }
    }
    return 0;
}
