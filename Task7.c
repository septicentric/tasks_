#include <stdio.h>
#include <math.h>

int main() {
	/*
	char c;
	int n = 0;
	printf("Enter symbol:");
	scanf("%c", &c);
	switch (c >= '0' && c <= '9') {
	case 1:
		printf("'%c' is a digit.\n", c);
		n++;
		break;
	}

	switch (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
	case 1:
		printf("'%c' is a letter.\n", c);
		n++;
		break;
	}
	if (n == 0) {
		printf("'%c' is an unknown symbol!", c);
	}
	*/

	
	float x, y;
	char c;
	printf("Pls, insert operation in A?B format, where is '?' -  operational sign:\n");
	scanf("%f%c%f", &x, &c, &y);
	switch (c) {
	case '+':
		printf("%g %c %g = %g", x, c, y, x + y);
		break;
	case '-':
		printf("%g %c %g = %g", x, c, y, x - y);
		break;
	case '*':
		printf("%g %c %g = %g", x, c, y, x * y);
		break;
	case '/':
		printf("%g %c %g = %g", x, c, y, x / y);
		break;
	case '^':
		printf("%g %c %g = %g", x, c, y, pow(x, y));
		break;
	case '%': 
		if ((float)((int)x) == x && (float)((int)y) == y) {
			printf("%d %c %d = %d",(int) x, c, (int) y, (int)x % (int)y);
		}
		else {
			printf("Numbers are not whole.");
		}
		break;
	default:
		printf("Unknown operation!");
	}
	

	//Hometask

	/*
	int d;
	printf("Pls, enter number of the day of a week:\n");
	scanf("%d", &d);
	switch (d) {
	case 1:
		printf("It's a Monday. %d days to Sunday left!\n", 7 - d);
		break;
	case 2:
		printf("It's a Tuesday. %d days to Sunday left!\n", 7 - d);
		break;
	case 3:
		printf("It's a Wednesday. %d days to Sunday left!\n", 7 - d);
		break;
	case 4:
		printf("It's a Thursday. Only %d days to Sunday left!\n", 7 - d);
		break;
	case 5:
		printf("It's a Friday. Only %d days to Sunday left!\n", 7 - d);
		break;
	case 6:
		printf("It's a Saturday. Only %d day to Sunday left!\n", 7 - d);
		break;
	case 7:
		printf("It's a Sunday. You don't need to count days anymore!\n");
		break;
	}
	*/
}