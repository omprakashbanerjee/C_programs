#include<stdio.h>
int main()
{
    int s1, s2, s3;
   printf("Enter first side of triangle");
   scanf("%d",&s1);
   printf("Enter second side of traingle");
   scanf("%d", &s2);
   printf("Enter the third side of triangle");
   scanf("%d", &s3);
   if(s1 == s2 && s2 == s3)
      printf("The given triangle is equilateral\n"); 
      else
      {
       if(s1 == s2 || s2 == s3 || s3 == s1)
      printf("The given triangle is isosceles\n");
       else 
      printf("The given Triangle is scalene\n");
      }
   return 0;
}