#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, La, Lb, Lc;
	float d1, d2;
	char z, sym;
	int e = 1; //проверка существования
	printf("Enter any key to continue...\n");
	while ((z = getchar()) != 'n') {
		printf("Insert symbol for drawing\n");
		scanf("%c", &sym);
		printf("Insert a, b, La and Lb\n");
		scanf("%f, %f, %f, %f", &a, &b, &La, &Lb);
		Lc = (360 - La - Lb) / 2; //угол в градусах
		printf("%f, %f, %f, %f\n", a, b, La, Lb);
		printf("%f\n", Lc);
		if (a > b) c = sqrt(2. * a * a * (1 - cosf((float)La * M_PI / 180)));
		if (b > a) c = sqrt(2. * b * b * (1 - cosf((float)Lb * M_PI / 180)));
		d = sqrt(1. * a * a + 1. * b * b - 2. * a * b * cosf((float)Lc * M_PI / 180));
		d1 = a * cosf((float)La * M_PI / 180 / 2);
		d2 = d - d1;
		printf("%d - c; %d - d; %d - d1, %d - d2\n", (int)c, (int)d, (int)d1, (int)d2);

		if (c > 2 * a || c > 2 * b) {
			printf("Romboid isn't exist!\n");
			e = 0;
		}

		int y;
		if (c / (int)d1 >= 2 && e == 1) {
			if (e == 0) break;
			for (int j = 1; j <= ((2 * c - 1) - 1) / 2; j++) {
				printf(" ");
			}
			printf("%c\n", sym);
		}
		for (int i = 1; i <= (int)d1; i++) { //верхняя часть
			if (e == 0) break;
			y = i * c / (int)d1;
			int s = ((2 * c - 1) - (2 * y - 1)) / 2;
			for (int j = 1; j <= s; j++) {
				printf(" ");
			}
			for (int j = 1; j <= y; j++) {
				printf("%c ", sym);
			}
			printf("\n");
		}

		for (int i = (int)d2 - 1; i >= 1; i--) {
			if (e == 0) break;
			y = i * c / (int)d2;
			int s = ((2 * c - 1) - (2 * y - 1)) / 2;
			for (int j = 1; j <= s; j++) {
				printf(" ");
			}
			for (int j = 1; j <= y; j++) {
				printf("%c ", sym);
			}
			printf("\n");
		}
		if (c / (int)d2 >= 2 && e == 1) {
			for (int j = 1; j <= ((2 * c - 1) - 1) / 2; j++) {
				printf(" ");
			}
			printf("%c\n", sym);
		}
		e = 1;
		printf("Do you want to continue? (y/n - Yes/No)\n");
		if ((z = getchar()) == 'n') break;
	}
}