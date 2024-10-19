#include <stdio.h>
#include <math.h>

double fa(double x) {
	double y;
	if (x > 3) {
		y = 1 / (x * x * x + 3);
	}
	else {
		y = x * x - 3 * x + 9;
	}
	return y;
}

double fb(double x) {
	double y;
	y = x * exp(sin(x * x));
	return 0;
}

int main() {
	double x;
	scanf("%lf", &x);
	printf("F1(x)=%lf , F2(x)=%lf\n", fa(x), fb(x));
	printf("F1(x) * F2(x) = %lf\n", fa(x) * fb(x));
	printf("F1(x)^2 - F2(x)^2 = %lf\n", fa(x) * fa(x) - fb(x) * fb(x));
	printf("2 * (F1(x) + F2(x)) = %lf\n", 2 * (fa(x) + fb(x)));
}