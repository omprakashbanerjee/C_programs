#include <stdio.h>
void main()
{
    int area, radius, perimeter, diameter;
    printf("enter the radius value");
    scanf("%d", &radius);
    printf("enter value of diameter");
    scanf("%d", &diameter);
    area = 3.14 * radius * radius;
    perimeter = 3.14 * diameter;
    printf("area of circle %d\n", area);
    printf("perimeter of circle %d", perimeter);
    return 0;
}