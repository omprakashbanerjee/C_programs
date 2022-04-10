#include<stdio.h>
int main()
{ int a[]={1,3,2,4,5};
    int sum=0,*p=&a[0],length;
    length=sizeof(a)/sizeof(a[0]);
    int i;//when we write 'a' this means it is pointing to first element of the array
    for(i=0;i<length;i++)//for(p=&a[0];p<=&a[4];p++) sum+=*p;
    {//or we can write the for loop as for(p=a;p<=a+4,p++)
        sum=sum+*p;
        *p++;
    }
printf("sum of the elements of the given array is %d ",sum);
}
