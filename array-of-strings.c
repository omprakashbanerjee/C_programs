#include<stdio.h>
#include<string.h>
int main()
{
    char *fruits[]={"2 apples","3 bananas","1 pineapples","2 oranges"};
    if(strcmp(fruits[0],fruits[1])<0)
        printf("%s is less than %s",fruits[0],fruits[1]);
    else if(strcmp(fruits[0],fruits[1])>0)
        printf("%s is greater than %s",fruits[0],fruits[1]);
    return 0;


}
