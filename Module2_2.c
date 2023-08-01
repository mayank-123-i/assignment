#include <stdio.h>
#include <math.h>
int main()
{
    int p, i, t;
    float r, CI;
    printf("Enter Principle, rate and time\n ");
    scanf("%d%f%d", &p, &r, &t);

    i = p * r * t / 100;

    CI = p * pow((1 + r / 100), t);

    printf("simple interest is : %d \n", i);
    printf("Compound interest is : %f\n", CI);
    return 0;
}