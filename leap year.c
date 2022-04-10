#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0)
        printf("year is leap year");
    else if(year%100==0)
        printf("year is not a leap year");
    else if(year%4==0)
        printf("year is a leap year");
    else
        printf("not leap year");
    return 0;
}
