#include <stdio.h>
int main()
{
  int num1, num2;
  printf("enter the first no");
  scanf("%d", &num1);
  printf("enter the second no");
  scanf("%d", &num2);
  if (num1 < num2)
  {
    printf("The Smaller Number Is %d", num1);
  }
  else
  {
    printf("The Smaller Number Is %d", num2);
  }
  return 0;
}
