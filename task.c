#define D 2.54
//#define P 2.32166
#include <math.h>
#include <stdio.h>

int main()
{
	
	int num1, num2;
	puts("Insert a number, pls");
	scanf("%d", &num1);
	printf("Number %d was inserted\n", num1);
	puts("Insert a second number, pls");
	scanf("%d", &num2);
	printf("Number %d was inserted\n", num2);
	printf("sum: %d\n", num1 + num2);
	printf("razn: %d\n", num1 - num2);
	printf("proiz: %d\n", num1 * num2);
	printf("chast: %d\n", num1 / num2);
	printf("ostat: %d\n", num1 % num2);
	

	/*
	int dym;
	float result;
	puts("Insert number of inches, pls");
	scanf("%d", &dym);
	result=D*dym;
	printf("%d english inches - it's %.1f cm\n", dym, result);
	result = P * dym;
	printf("%d spanish inches - it's %.1f cm\n", dym, result);
	*/

	/*
	int a, b;
	puts("Insert numbers a and b with space");
	scanf("%d %d", &a, &b);
	printf("-------------------------\n");
	printf("|  a*b\t|  a+b\t|  a-b\t|\n");
	printf("-------------------------\n");
	printf("|  %d*%d\t|  %d+%d\t|  %d-%d\t|\n", a,b,a,b,a,b);
	printf("-------------------------\n");
	printf("|  %d\t|   %d\t|  %d\t|\n", a*b, a+b, a-b);
	*/

	//HOMETASK

	/*
	int a, b;
	float P, S;
	puts("Please insert lengths of triangle's sides with space");
	scanf("%d %d", &a, &b);
	P = a + b + sqrt(a * a + b * b);
	S = a * b / 2;
	printf("Perimeter = %f, square = %f", P, S);
	*/
}
