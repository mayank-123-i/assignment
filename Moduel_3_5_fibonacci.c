#include <stdio.h>
#include <conio.h>

int main()
{
    int a, i, factorial = 1;

    printf("Enter No : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++)

        factorial = factorial * i;

    printf("Factorial of %d is : %d \n", a, factorial);

    return 0;
}