#include <stdio.h>
int main()
{
    int n, i;
    float f = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Error factorial of a negative no doesn't exist");
    else
    {
        for (i = 1; i <= n; ++i)
        {
            f *= i;
        }
        printf("Factorial of %d is %.2f", n, f);
    }

    return 0;
}