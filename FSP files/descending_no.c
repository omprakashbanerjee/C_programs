// C Program To Arrange Numbers in Descending Order
#include <stdio.h>
int main()
{
    int a, b, c, desen;
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
    printf("\n The no.s in descending order");
    printf("\n %d,%d,%d");
    return 0;
}