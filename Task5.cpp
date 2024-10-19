#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
	/*
	float gr;
	puts("Insert number of degrees, pls");
	scanf("%f", &gr);
	printf("Number of degrees in radians - %.6f\n", gr * M_PI / 180);
	*/

	// var 8
	
	/*
	float a, b, c, x, y;
	c = 1.3; 
	// x = 2.8; 
	puts("Inset x, pls");
	scanf("%f", &x);
	a = pow(c, 3) + log(fabs(x));
	b = pow(a, 2) + sqrt(c);
	y = pow(M_E, x) + pow(5.8, -x); 
	printf("For x = %.1f, result is y = %.1f\n", x, floor(y * 10) / 10);
	
	int h1 = 0, h2 = 0;
	if ((int)a % 2 != (int)b % 2) {
		h1 = 1;
	}
	if ((int) a % 3 == (int) b % 3 == (int) y % 3 == 0) {
		h2 = 1;
	}
	if (h1==h2==1) {
		printf("Requirements are right-o!");
	}
	if (h1 > h2) {
		printf("Requirement 1 is true!");
	}
	else {
		printf("Requirement 2 is true!");
	}*/

	//Hometask
	float x, y, F;
	scanf("%f %f", &x, &y);
	F = (exp(pow(x, 3)) + pow(cos(x - 4), 2)) / (atanf(x) + 5.2 * y);
	printf("x  = %f, y = %f, F = %f\n", x, y, F);

}