#include <locale.h>

#include <stdio.h>

#define _USE_MATH_DEFINES 

#include <math.h> 

float main()

{
	setlocale(LC_ALL, "RUS");
	float x, y, F, d=1;
	puts("������� �������� x");
	scanf("%e", &x);
	puts("������� �������� y");
	scanf("%e", &y);
	F = (pow(cos(y), 2) + 2.4 * d) / (exp(y) + log(pow(sin(x), 2) + 6));
	printf("%lf", F);
	//�� ����� ������� ����� ����� �������� ���� ��� ����� ����� �� ���� 
	// �=1,5e-06 �=-2e+09
}
