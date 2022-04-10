#include<stdio.h>
#define n 2
int main()
{
    int a[n],*p;
    printf("enter the elements\n ");
    for(p=a;p<=a+n-1;p++)
        scanf("%d",p);//here also we r not changing base address of array
        //we r putting it into another pointer then we r changing that
    printf("now the array in reverse order is ");
    for(p=a+n-1;p>=a;p--)
        printf("%d ",*p);
return 0;
}
