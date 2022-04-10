#include<stdio.h>
int main()
{
    int base,exponent;
    int power=1,expo;
    float result;
    printf("enter the base ");
    scanf("%d",&base);
    printf("enter the exponent ");
    scanf("%d",&exponent);
    expo=exponent;
    if(exponent>0)
    {
        while(exponent!=0)
        {
            power=power*base;
            exponent--;
        }
        printf("%d to the power of %d is %d ",base,expo,power);
    }
    else if(exponent==0)
    printf("%d to the power %d is 1 ",base,exponent);
    else if(exponent<0)
    {
        while(exponent!=0)
        {
            power=power*base;
            exponent++;
        }
        result=1.0/power;
        printf("%d to the power %d is %.7f",base,expo,result);
    }

    return 0;
}
