#include<stdio.h>
int main()
{
    int x=4,y=3;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("after xor operation x=%d y=%d",x,y);
return 0;

}
