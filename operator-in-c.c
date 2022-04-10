#include<stdio.h>
int main()
{
int a=1, b=1;
int c=++a||b++; //remember in the OR operation whenever it gets a true value
//then the remaining expression is not evaluated so b++ will not be incremented
//therefore answer will not be 1111, it will be 1101
int d=b--&&--a;
printf("%d %d %d %d",d,c,b,a);
return 0;
}
