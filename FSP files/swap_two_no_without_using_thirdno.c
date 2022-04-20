#include<stdio.h>
void main()
{
    int a,b;
    printf("enter first no");
    scanf("%d", &a);
    printf("enter second no");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b; 
    printf("swapping nos %d", a,b);
    return 0;
}