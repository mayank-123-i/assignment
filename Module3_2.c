#include <stdio.h>

main()
{
    int a, i, count = 0;
    printf("Enter any number n:");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d is a Prime number", a);
    }
    else
    {
        printf("%d is not a Prime number", a);
    }
    return 0;
}