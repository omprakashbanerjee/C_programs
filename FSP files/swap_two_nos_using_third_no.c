#include<stdio.h>
void main()
{
    int a,b,x;
    printf("enter first no.");
    scanf("%d", &a);
    printf("enter second no");
    scanf("%d", &b);
    x=a;
    a=b;
    b=x;
    printf("swapping no.s %d", x);
    return 0;
}