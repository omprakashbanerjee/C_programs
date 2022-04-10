#include<stdio.h>
#define n 2
#define o 2
int main()
{
int    a[n][o],*p;
    printf("enter the elements of the array\n");
    for(p=a;p<a+n;p++)
        scanf("%d",p);
    printf("elements of the array are \n");
    for(p=a;p<a+n;p++)
        printf("%d ",*p);
    printf("elements in the reverse order\n");
  // for(p=a+o-1;p>=a;p--);
    //printf("%d ",*p);
    return 0;
}

