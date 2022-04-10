#include<stdio.h>
int main()
{
    int i,j,n,result=1;
    printf("enter the nmbr");
    scanf("%d",&n);
    printf("enter the power");
    scanf("%d",&j);
   if(n==0)
    printf("result is %d ",n);
   if(j==0)
    printf("result is 1");
   else
    {
       for(i=1;i<=j;i++)
        {
        result=result*n;
        }
    printf("result is %d",result);

    }
    return 0;
}
