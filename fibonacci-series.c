#include<stdio.h>
int main()
{
    int a ,b,n,i,result=0;
    printf("enter the no. of terms");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        result=b+a;
        a=b;
        b=result;

    }

}
