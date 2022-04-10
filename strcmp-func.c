#include<stdio.h>
#include<string.h>
int main()
{
    char *str1="abcdef";
    char *str2="abcdef";
    char *str3="bbcdef";
    char *str4="abcd";
    printf("str1 %s \nstr2 %s \nstr3 %s \nstr4 %s\n",str1,str2,str3,str4);
    if(strcmp(str1,str2)>0)
        printf("str1 greaterr than str2 \n");
    else if(strcmp(str1,str2)<0)
    printf("str1 is less than str2\n");
    else if(strcmp(str1,str2)==0)
        printf("str1 is equal to str2\n");
    if(strcmp(str3,str4)>0)
        printf("str3 greater than str4\n");
    else if(strcmp(str3,str4)<0)
    printf("str3 is less than str4\n");
    else if(strcmp(str3,str4)==0)
        printf("str3 is equal to str4\n");
        if(strcmp(str1,str3)>0)
        printf("str1 greaterr than str3\n");
    else if(strcmp(str1,str3)<0)
    printf("str1 is less than str3\n");
    else if(strcmp(str1,str3)==0)
        printf("str1 is equal to str3\n");
    return 0;
}
