#include <stdio.h>
#include <conio.h>

int main()
{
    int a, r;

    printf("Enter No : ");
    scanf("%d", &a);

    while (a > 0)
    {
        r = a % 10;
        printf("%d", r);
        a = a / 10;
    }

    return 0;
}