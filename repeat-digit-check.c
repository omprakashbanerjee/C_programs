#include<stdio.h>
int main()
{
    int q,N,seen[10]={0},rem;
    printf("enter the number");
    scanf("%d",&N);

    while(N>0)
    {
        rem=N%10;


        if(seen[rem]==1)
            break;
        seen[rem]=1;
        N=N/10;
    }
    if(N>0)
        printf("yes");
        else
            printf("no");
        return 0;
}
