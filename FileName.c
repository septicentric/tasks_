#include <locale.h>
#include <stdio.h>


 int main()
{	
	setlocale(LC_CTYPE, "RUS");
	int n = 4, L = 2313;
	printf("dano:\n");
	printf("\t%d\n", n);
	printf("\t%d\n", L);
	printf("       __________\n");
	printf("otvet:\n");
	printf("\t%+02d%.6f", n/L,  n/(float)L);

}
