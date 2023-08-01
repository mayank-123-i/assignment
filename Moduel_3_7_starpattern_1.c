#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,j;

    printf("Enter No : ");
    scanf("%d",&a);

    for (i = 1; i <=a; i++)
    {

        for (j = 1; j <=i; j++)
        {
            printf("*",i);
        }
        
        printf("\n");
    }
    
    return 0;
}