#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area;
    const double Pi = 3.142;
    double r;

    // Request radius
    printf("Please provide your radius: ");
    scanf("%lf", &r);

    area = Pi * r * r;

    printf("The area is %lf\n", area);

    return 0;
}
