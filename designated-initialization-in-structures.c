#include<stdio.h>
struct abc{ int x,y,z}a,b;
int main(){struct abc a={.y=20,.x=10,.z=50};
struct abc b={1,2,3};
printf("%d %d %d\n",a.x,a.y,a.z);
printf("%d %d %d",b.x,b.y,b.z);
return 0;
}
