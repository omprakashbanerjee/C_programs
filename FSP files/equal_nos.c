#include<stdio.h>
int main()
{
    int num1,num2,r;
    printf("Enter first no.");
    scanf("%d",&num1);
    printf("Enter second no.");
    scanf("%d",&num2);
    if (num1==num2)
    {
        r = (num1 + num2);
    }
    else 
    {
        r = (num1 * num2);
    }
    printf("%d",r);
    return 0;
}