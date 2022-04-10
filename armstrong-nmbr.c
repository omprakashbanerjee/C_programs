#include<stdio.h>
int main()
{
    int nmbr,count=0,result=0,mul=1,cnt,rem;
    printf("enter the no");
    scanf("%d",&nmbr);
    int q=nmbr;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
        cnt=count;
        q=nmbr;
        while(q!=0)
        {
            rem=q%10;
            while(cnt!=0)
            {
                mul=mul*rem;
                cnt--;
            }
            result=result+mul;
            cnt=count;
            q=q/10;
            mul=1;
        }
        if(result==nmbr)
            printf("%d s an armstrong nmbr",nmbr);
        else
            printf("%d is not an armstrong nmbr",nmbr);
        return 0;
}
