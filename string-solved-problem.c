#include<stdio.h>
#include<string.h>
int main()
{ char p[20];
    char *s="string";
    int length=strlen(s); //strlen func calc the length of characters only not the null char
    int i;
    for(i=0;i<length;i++)
        p[i]=s[length-i];//s[6] is actually a null char
    printf("%s",p);//as the first char is null char thats why whatever stored after that wont be printed on the screen
    return 0;
}
