#include <stdio.h>
#include <math.h>
#include <limits.h>

#define ROW 9
#define COL 9

void main() {
	/*
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; row++) {
		for (col = 1; col <= row; col++) {
			printf("%5d", col * row);
			printf(" ");
		}
		printf("\n");
	}

	int n;
	printf("Insert a number, pls: ");
	scanf("%d", &n);
	for (row = 1; row <= n; row++) {
		for (col = 1; col <= row; col++) {
			printf("%5d ", n);
		}
		printf("\n");
	}
	*/

	while (1) {
		int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 1, a8=0, a9 = 0, a10 = 0, a11 = 0, a12 = 0;
		int a11_1 = 0, a11_2 = 0;
		int a12_1 = 1, a12_2 = 1;
		char a;
		unsigned long long n;
		printf("Pls, enter the number (smaller than 20 digits) - ");
		scanf("%llu", &n);
		printf("%llu\n", n);
		int j = 0;
		unsigned long long k = n;
		while (k > 0) 
		{
			k /= 10; 
			j++;
		}
		printf("%d\n", j);
		int p;
		for (int i = 1; i <= j; i++) { //продвижение разряд за разрядом
			double t_ = pow(10, (j - i));
			unsigned long long llt = n /(int)t_;
			llt %= 10;
			int t = (int)llt;
			printf("%d) %d\n", i, t);
			if (t == 3) a1++;
			if (t == n % 10) a2++;
			if (t % 2 == 0) a3++;
			if (t > 5) a4++;
			if (t % 2 != 0) a5 += t;
			if (t >= 7) a6 += t;
			if (t != 0) a7 *= t;
			if (j >= 2 && i == 2) a8 = t;
			if (i == j - 1) a8 *= t;

			if (t % 2 == 0 && (i != j || i != j - 1)) a9 += t;
			if (i > 1 && t == p) a10++;
			if (i <= j / 2) a11_1 += t;
			if (i > j / 2 && j % 2 == 0 || i > j / 2 + 1 && j % 2 == 1) a11_2 += t;
			if (i % 2 == 0) a12_1 += t;
			if (i % 2 == 1) a12_2 += t;

			p = t; //прошлое перед t
		}
		if (a11_1 == a11_2) a11 = 1;
		a12 = a12_1 * a12_2;

		printf("Num of '3' - %d\n", a1);
		printf("Num of last num in digit - %d\n", a2);
		printf("Num of chot nums - %d\n", a3);
		printf("Num of nums > 5 - %d\n", a4);
		printf("Sum of nechot nums - %d\n", a5);
		printf("Sum of nums > 7 - %d\n", a6);
		printf("Proizv of all nums without '0' - %d\n", a7);
		printf("Proizv last and second nums - %d\n", a8);
		printf("Sum of chot nums without last - %d\n", a9);
		printf("Num of similar nums near - %d\n", a10);
		if (a11 == 1) {
			printf("Sum of nums left and right halfs are similar\n");
		}
		else {
			printf("Sum of left and right halfs aren't similar\n");
		}
		printf("Proizv of sum chot and nechot nums - %d\n", a12);

		printf("Do you want to continue? (Yes - y, No - n)\n");
		scanf("%c", &a);

		if ((a = getchar()) == 'n') break;

	}


}
