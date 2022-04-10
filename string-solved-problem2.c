#include<stdio.h>
#include<string.h>
int main()
{
    char c[]="GATE2011";
    char *p=c;
    printf("%s",p+p[3]-p[1]);//after solving we will get the location suppose 1004 that means go to that location and start printing until \0 is encountered
//p[3]=E=69,p[1]=A=65
}
