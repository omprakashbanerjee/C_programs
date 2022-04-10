#include<stdio.h>
#include<math.h>
int main()
{
    int binary,rem,decimal=0,weight=1;
    printf("enter the the binary nmbr");
    scanf("%d",&binary);
    while(binary!=0)
    {
     rem=binary%10;
     decimal=decimal+rem*weight;
     weight=weight*2;
     binary=binary/10;
    }
    printf("decimal equivalent is %d",decimal);
    return 0;
}
