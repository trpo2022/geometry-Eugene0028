#include <stdio.h>
#include <math.h>
#include "circle.h"

void circle()
{
    float x, y, r, p, s;
    printf("Enter (x, y, radius) for circle: ");
    scanf(" circle(%f, %f, %f)", &x, &y, &r);
    if (r > 0)
    {
        p = M_PI * r * 2;
        s = M_PI * r * r;
        printf("Perimetr: %.2f\nS: %.2f \n", s, p);
    }
    else
    {
        printf("Error\n");
    }
}
