#include<stdio.h>
#include<limits.h>
void main()
{
    int i;
char var=65;
int var2=INT_MAX;
for(i=0;i<=255;i++)
    {
        printf("%d is equivalent to %c\n",var,var);
        var=var++;
}
return 0;
}
