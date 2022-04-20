#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter value of first no");
    scanf("%d", &a);
    printf("enter value of second no");
    scanf("%d", &b);
    printf("enter value of third no");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The Greatest No Is %d", a);
    }
    else if (b > a && b > c)
    {
        printf("The Greatest No Is %d", b);
    }
    else
    {
        printf("The Greatest No Is %d", c);
    }
    return 0;
}