#include<stdio.h>
int main()
{int i;
    for(i=0;i<20;i++)
        {
             switch(i)
            {
                case 0:i+=5;//since there is no break after the case so when compiler enters
                case 1:i+=2;//into the switch then case 0 will be satisfied and all other cases will be
                case 5:i+=5;//executed too therefore output will be 16 and 21
                default:i+=4;
            }
            printf("%d",i);
        }
}
