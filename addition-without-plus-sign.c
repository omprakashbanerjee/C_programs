#include<stdio.h>
int main()
{
    int i,x,y;
    printf("enter the first nmbr");
    scanf("%d",&x);
    printf("enter the second nmbr");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
        {
        x=x++;
        }
        printf("the result is %d",x);
        return 0;
}
