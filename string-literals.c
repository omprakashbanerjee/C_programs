#include<stdio.h>
#include<string.h>
int main()
{
    char *ptr="hellow",a[10],s[10];
    puts(ptr);//this command prints the string ptr
    printf("%c %c %c %c %c %c","hellow"[0],"hellow"[1],"hellow"[2],"hellow"[3],"hellow"[4],"hellow"[5]);
   printf("\n%c %c %c %c %c %c",ptr[0],ptr[1],ptr[2],ptr[3],ptr[4],ptr[5]);//in this method single char is printed thats why %c is used
   printf("\n%7.2s\n",ptr);//string will be printed in 7 field and only 2 digits are printed
    printf("enter the string a \n ");
    scanf("%9s",a);// if we add space in our string then it wont accept beyond that
   //in the above scanf we have specified length 9 so that last one will be null char that is \0
    printf("%s\n",a);
    puts(a);//this command prints the string(a)
    return 0;
}
