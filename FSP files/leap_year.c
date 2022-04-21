#include <stdio.h>
int main()
{   
    int yr, leap;
    printf("Enter the year");
    scanf("%d", &yr);
    leap=yr%4;
    if (leap==0)
    {
        printf("The year %d is leap year.", yr);
    }
    else
    {
        printf("The year %d is not a leap year", yr);
    }
    
    return 0;
}