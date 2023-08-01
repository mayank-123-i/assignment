#include <stdio.h>
#include <conio.h>

int main()
{
   int a,i;

   printf("Number\tsquare\tcube : ");
   scanf("%d",&a);

   for (i = 1; i <=a ; i++)
   {
    printf("%d\t%d\t%d\n",i,i*i,i*i*i);
   }
   
    return 0;
}