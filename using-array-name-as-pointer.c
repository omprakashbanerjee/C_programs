#include<stdio.h>
int main()
{
    int a[]={1,2,4,2,5};
   // printf("%p",a++) a++=a+1 this is not okk as we r trying to assign a new address to the base address
    printf("%p contains second element %d",(a+1),*(a+1));//this is okk as we r just accessing the address of the second element
    return 0;

}
