#include<stdio.h>
int main()
{
    int a[]={0,1,2,3,4,5,6,7,8},n,mid;
    int len;
    len=sizeof(a)/sizeof(a[0]);
    printf("length is %d \n",len);
    if (len%2==0)
        printf("mid element cant be found as length is even");
    else
       {
        mid=a[len/2];
        printf("mid element is %d\n location is a[%d]",a[mid],mid);
        }
return 0;
}
