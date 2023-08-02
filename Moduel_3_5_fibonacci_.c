#include <stdio.h>
#include <conio.h>

int main()
{
    int a,i,n=0,k=1,j;

    printf("Enter No : ");
    scanf("%d",&a);

    for (i = 1; i <=a ; i++)
    {
        printf("%d ",n);
        j=n+k;
        n=k;
        k=j;
    }
    
    return 0;
}