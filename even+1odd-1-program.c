#include<stdio.h>
void odd();
void even();
//int n=1;
void odd(n)
{
    if(n<=10)
    {
        printf("%d\n",n+1);
        n++;
        even(n);
    }
}
void even(n)
{
    if(n<=10)
    {
        printf("%d\n",n-1);
        n++;
        odd(n);
    }
}
int main()
{int n=1;
    odd(n);
    return 0;
}
