#include<stdio.h>
void fun2(n)
{
    if(n<=0)
        return;
    printf("%d ",n);
    fun2(2*n);
    printf("%d ",n);
}
int main()
{
    int n;
    printf("enter the value \n");
    scanf("%d",&n);
    fun2(n);
}
