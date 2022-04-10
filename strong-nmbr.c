#include<stdio.h>
int main()
{
    int rem,q, i,result=0,nmbr,fact=1;
    printf("enter the nmbr\n");
    scanf("%d",&q);
    nmbr=q;
    while(nmbr!=0)
        {
            rem=nmbr%10;
                for(i=1;i<=rem;i++)
                    {
                        fact=fact*i;
                    }
                    result=result+fact;
                    fact=1;
                    nmbr=nmbr/10;
        }
    if(result==q)
    printf("%d is strong nmbr",q);
    else
        printf("%d is not a strong nmbr",q);
    return 0;
}
