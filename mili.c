#include <locale.h>

#include <stdio.h>
#define      M       2.852
#define      S       1.609
#define      R       1475
#define      C       7.468
#define      G       7412.6
int main()

{
	setlocale(LC_ALL, "RUS");
	int mil;
	float res;
	puts("введите значение");
	scanf("%d", &mil);
	res = M * mil;
	printf("%d морская миля - это %.3f км\n", mil, res);
	res = S * mil;
	printf("%d сухопутная миля - это %.3f км\n", mil, res);
	res = R * mil;
	printf("%d римска миля - это %.f км\n", mil, res);
	res = C * mil;
	printf("%d старорусская миля - это %.3f км\n", mil, res);
	res = G * mil;
	printf("%d географичечкая миля - это %.1f км", mil, res);


}