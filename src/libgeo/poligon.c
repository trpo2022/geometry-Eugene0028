#include "poligon.h"
#include <math.h>
#include <stdio.h>

void poligon()
{
	float a, b, c, d, p, s;
	printf("Enter poligon(a, b, c, d)\n");
	scanf(" poligon(%f, %f, %f, %f)", &a, &b, &c, &d);
	if (a > 0 && b > 0 && c > 0 && d > 0) 
	{
		if (a == c && b == d) 
		{
            		p = (a + b) * 2;
            		s = a * b;
            		printf("Perimetr: %.2f\nS: %.2f\n", p, s);
		} 
		else 
		{
			printf("Error\n");
		}
	} 
	else 
	{
        	printf("Error\n");
	}
}
