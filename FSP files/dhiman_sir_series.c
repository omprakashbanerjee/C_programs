#include <stdio.h>
int main()
{
    int i, n;
    float s = 0.0;
    printf("Enter number of terms ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s + 1 / (float)i;
    printf("The sum is %lf", s);
    return 0;
}