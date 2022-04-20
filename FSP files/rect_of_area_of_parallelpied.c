#include<stdio.h>
int main()
{
    int len,breadth,height,b,p,tsa;

    printf("enter value of length");

    scanf("%d",&len);

    printf("enter value of breadth");

    scanf("%d",&breadth);

    p = (2*(len+breadth));

    printf("%d",p);

    printf("\n enter value of height");

    scanf("%d",&height);

    printf("\n enter value of base");

    scanf("%d",&b);

    tsa = ((p*height) + (2*b));

    printf("%d",tsa);

    return 0;
    
}
