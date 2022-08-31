#include<stdio.h>
#include<limits.h>
int main()
{
    int i;
char var=65;
int var2=INT_MAX;
for(i=0;i<=255;i++)
    {
        printf("%d is equivalent to %c\n",var,var2);
        var=var++;
}
return 0;
}
