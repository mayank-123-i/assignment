#include <stdio.h>
#include <conio.h>

int main()
{
    int a;

    printf("Enter year : ");
    scanf("%d", &a);

    if (a%4==0)
    {
        printf("%d is leap year",a);
    }

    else
    {
        printf("%d is not leap year",a);
    }
    
    
    return 0;
}