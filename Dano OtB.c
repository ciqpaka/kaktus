#include <locale.h>

#include <stdio.h>
int main()

{
	setlocale(LC_ALL, "RUS");
	int n=3., L=333., k=3, m=1;
	float res;
	res = (float)n / L;
	printf("Дано:\n\t %3d\n\t %d\n\t ________\nОтвет:\n\t %0+8.3f", n, L, res);
}