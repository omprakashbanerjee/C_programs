#include<stdio.h>
int main()
{
    int a[]={5,16,7,89,45,32,23,10};
    int *p=&a[1],*q=&a[5];
    printf("%d %d %d %d %d",*(p+3),*(q-3),q-p,p<q,*p<*q);
    return 0;

}
