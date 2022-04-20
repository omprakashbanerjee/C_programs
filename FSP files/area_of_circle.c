#include<stdio.h>
int main()
{
    int area, radius;
    printf("enter the value of radius");
    scanf("%d", &radius);
    area = 3.14*radius*radius;
    printf("area of circle is %d", area);
    return 0;
}