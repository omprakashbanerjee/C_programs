#include<stdio.h>
#include<math.h>
int main()
{int i,x,count=0,val1,val2;
printf("enter the nmbr(positive nmbr only please)\n");
scanf("%d",&x);
val1=ceil(sqrt(x));
val2=x;
for(i=2;i<=val1;i++)
{
    if(val2%i==0)
        count=1;

}
if((count==0 && val2!=1)||val2==2||val2==3)
        printf("%d is a prime nmbr",x);
        else
        printf("%d is not a prime nmbr",x);
return 0;
}
