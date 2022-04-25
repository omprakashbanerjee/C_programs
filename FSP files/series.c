#include <stdio.h>
void main()
{
   int i, n;
   float s=0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   for( i=1;i<=n;i++)
   {
       if(i<n)
       {
     printf("1/%d + ",i);
     s+=1/(float)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     s+=1/(float)i;
     }
     }
        printf("Sum of Series terms %d\n : %f \n",n,s);
}  
