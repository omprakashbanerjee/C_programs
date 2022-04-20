#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter value of first no");
    scanf("%d", &a);
    printf("enter value of second no");
    scanf("%d", &b);
    printf("enter value of thirs no");
    scanf("%d", &c);
    printf("enter value of fourth no");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is larger", a);
    }
    if(b>c&&b>d)
    {
        printf("%d is larger", b);
    }
    if(c>d)
    {
        printf("%d is larger", c);
    }
    else
    {
        printf("%d is larger", d);
    }
}