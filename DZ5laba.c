#include <locale.h>

#include <stdio.h>

#define _USE_MATH_DEFINES 

#include <math.h> 

float main()

{
	setlocale(LC_ALL, "RUS");
	float x, y, F, d=1;
	puts("Введите значение x");
	scanf("%e", &x);
	puts("Введите значение y");
	scanf("%e", &y);
	F = (pow(cos(y), 2) + 2.4 * d) / (exp(y) + log(pow(sin(x), 2) + 6));
	printf("%lf", F);
	//НЕ НУЖНО СТАВИТЬ НУЛИК ПОСЛЕ ЗНАЧЕНИЯ ЕСЛИ ЭТО ЦЕЛОЕ ЧИСЛО ТО ЕСТЬ 
	// Х=1,5e-06 У=-2e+09
}
