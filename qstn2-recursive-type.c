#include<stdio.h>
void fun2(n)
{
    if(n==0)
        return;
    fun2(n/2);
    printf("%d ",n%2);
}
int main()
{
    int n;
    printf("enter the value \n");
    scanf("%d",&n);
    fun2(n);
}

