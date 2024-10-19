#include <stdio.h>

int main() {
	/*
	//*
	putchar('+');
	for (int start = 1; start <= 10; start++) {
		putchar('*');
	}
	putchar('+');
	printf("\n");

	//**
	for (int i = 1; i <= 10; i++) {
		if (i <= 5) {
			putchar('*');
		}
		else {
			putchar('^');
		}
	}
	printf("\n");


	//***
	for (int i = 1; i <= 10; i++) {
		putchar('*');
		putchar('!');
	}
	printf("\n");

	int n, m;
	printf("Pls, enter the smaller number - ");
	scanf("%d", &n);
	printf("And now enter the bigger number - ");
	scanf("%d", &m);
	int s = n; 
	int k = 0;
	for (int i = m; i >= n; i--) {
		s += i;
		printf("%d counts are finished.\n", k++);
	}
	printf("The result is - %d", s);

	*/

	/*
	int n, m;
	int S = 1;
	printf("Pls, insert number of degree - ");
	scanf("%d", &n);
	printf("Pls, insert number, that will be max border - ");
	scanf("%d", &m);
	for (int i = 1; i <= n && S * 2 <m; i++) {
		S *= 2;
		printf("2 ^ %2d = %10d\n", i, S);
	}
	printf("%dK\n", S / 1024);
	printf("%.1fK\n", (float) S / 1024);
	*/

	/*
	//var 9
	float x1 = 2, x2 = 4, y, k;
	printf("Insert step length <=1 pls - ");
	scanf("%f", &k);
	printf("----------------\n");
	for (float i = x1; i <= x2; i += k) {
		y = i * i * i + 3 * i * i - 3;
		printf("|%5g|%8g|\n", i, y);
		printf("----------------\n");
	}
	*/

	//Hometask
	int N;
	float S = 0;
	printf("Pls, enter the whole number - ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		S += i * i;
	}
	printf("Result is %g", S);

}
