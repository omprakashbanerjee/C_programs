#include<stdio.h>
int main()
{
    unsigned int i=500;//range of unsigned int is 0 to 4294967295
    while(i++!=0);//when it reaches final value then bcz of i++ it comes back to 0
    printf("%d",i);//as 0 is not equal to 0 is false therefore we come out of the loop, after we come out of the loop i will
    //contain 1 bcz of post incr therefore 1 will be printed
    return 0;
}
