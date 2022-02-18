#include <stdio.h>
#include <math.h>
const float PI = 3.1415926535897932384626433832795;
int main()
{
	int a;
	double a1, a2, a3, p, p2, rad, s;
	printf("1. Circle\n2. Triangle\nChoose your figure: ");
	scanf("%d", &a);
	if (a == 1)
	{
		printf("Enter radius:");
		scanf("%lf", &rad);
		s = PI * rad * rad;
		p = PI * 2 * rad;
		printf("S circle: %.4lf\nLenght circle: %.4lf\n", s, p);
	}
	if (a == 2)
	{

		while (1)
		{

    	    		printf("Enter triangle sides: ");
    	    		scanf("%lf%lf%lf", &a1, &a2, &a3);
    	    		if (a3 <= a1 + a2)
    	    		{
    	        	p = a1 + a2 + a3;
    	        	p2 = p / 2;
               		s = sqrt(p2 * (p2 - a1) * (p2 - a2) * (p2 - a3));
                	printf("S triangle: %.4lf\nPerimetr triangle: %.4lf\n", s, p);
                	break;
    	    		}
    	    		else
    	    		{
		  	printf("Error. ");
    	        	continue;
    	    		}
		}
	}
	return 0;
}
