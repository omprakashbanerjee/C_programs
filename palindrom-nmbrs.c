#include<stdio.h>
#include<conio.h>
int main()
{
    int nmbr,result=0,remainder,q;
    printf("enter the nmbr");
    scanf("%d",&nmbr);
    q=nmbr;
    while(q!=0)
    {
        remainder=q%10;
    result=result*10+remainder;
    q=q/10;
    }
    if(result==nmbr)
        printf("palindrom");
        else
            printf("not palindrom");
    return 0;

}
