#include<stdio.h>
int main()
{
    int m,n;
    int i=1;
    printf("enter the n value");
    scanf("%d",&n);
        while (i<=10)
    {
       m=i*n;
    printf("%d\n",m);
    i++;
    }
    return 0;
}