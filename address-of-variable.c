//program to print the address of variable
#include<stdio.h>
int main()
{
    int i=10,*p;
    p=&i;
    printf("address of i is %p\n address of pointer p is %p",p,&p);
}
