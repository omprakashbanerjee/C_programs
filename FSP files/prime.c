#include <stdio.h>
main()
{
    int n, i, p = 0;
    printf("Enter any number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            p++;
        }
    }

    if (p == 2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a Prime number");
    }
    return 0;
}
