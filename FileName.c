#include <locale.h>
#include <stdio.h>


 int main()
{
	setlocale(LC_CTYPE, "RUS");
	int n=4, L=2313;
	printf("����:\n");
	printf("\t%d\n", n);
	printf("\t%d\n", L);
	printf("     __________\n");
	printf("�����:\n");
	printf("\t%+02.6f", (float) n / (float) L);

}