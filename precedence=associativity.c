#include<stdio.h>
int main()
{int a;
a=fun1()+fun2();
printf("\n%d",a);
return 0;
}
int fun1()
{
    printf("hello");
    return 1;

}
int fun2()
{
    printf("world");
    return 1;
}
