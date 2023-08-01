#include <stdio.h>
#include <conio.h>

int main()
{
    int Acc, Stat, Ba, Eco;
    float Percentage;

    printf("Enter Acc marks : ");
    scanf("%d", &Acc);

    printf("Enter Stat marks : ");
    scanf("%d", &Stat);

    printf("Enter Ba marks : ");
    scanf("%d", &Ba);

    printf("Enter Eco marks : ");
    scanf("%d", &Eco);

    int Total = Acc + Stat + Ba + Eco;
    printf("Total marks is %d \n", Total);

    Percentage = Total / 4;

    printf("percentage is %f \n", Percentage);

    if (Percentage > 70)
    {
        printf("Distinctio");
    }

    else if (Percentage >= 60 && Percentage < 70)
    {
        printf("First Class");
    }

    else if (Percentage >= 50 && Percentage < 60)
    {
        printf("Second Class");
    }

    else if (Percentage >= 40 && Percentage < 50)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");
    }

    return 0;
}