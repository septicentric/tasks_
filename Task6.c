#include <stdio.h>

int main() {
	
	/*
	int year;
	puts("Pls, enter year number next:");
	scanf("%d", &year);
	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) {
		printf("Year %d is a leap year\n", year);
	}
	else {
		printf("Year %d is not a leap year\n", year);
	}
	*/

	/*
	float x, F;
	//for x=12, F=0.2; for x=4, F=-3; for x=3, F=0; for x=3.14, F=-0.42;
	puts("Pls, enter x next");
	scanf("%f", &x);
	if (x > 7) {
		F = 1 / (x - 7);
	}
	else {
		F = -3 * x + 9;
	}
	printf("for x = %g, F(x) = %g", x, F);
	*/

	//Написать программу, которая вычисляет время в минутах до	полудня или полуночи,
	// в зависимости от того, что ближе к введенному пользователем времени в часах(0 - 24) и минутах(0 - 60).

	/*
	int h, m, mins;
	puts("Pls, enter your time in XX:XX format");
	scanf("%d:%d", &h, &m);
	if (h%12==0&&m==0) {
		if (h == 12) {
			printf("It's already noon.\n");
		}
		else {
			printf("It's already midnight.\n");
		}
	}
	else {
		if (h < 12) {
			mins = 12 * 60 - h * 60 - m;
			printf("It's %d hours and %d minutes left until the noon.\n", mins/60, mins%60);
		}
		else {
			mins = 24 * 60 - h * 60 - m;
			printf("It's %d hours and %d minutes left until the midnight.\n", mins / 60, mins % 60);
		}
	}
	*/

	//HomeTask

	float x, y;
	puts("Pls, enter x, y - coordinates of the point 'A':");
	scanf("%f %f", &x, &y);
	if (x >= 2 && x <= 5 && y <= -(4 * x - 23) / 3 && y >= (5 * x - 22) / 3) {
		printf("Point 'A' belongs to an area.\n");
	}
	else {
		printf("Point 'A' isn't belong to an area.\n");
	}


}