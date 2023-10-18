#include <stdio.h>

#include <locale.h>

#include <math.h> 

//7.1 СИМВОЛ ИЛИ БУКВА
/*
int main()
{
	setlocale(LC_ALL, "RUS");
	char c;

	printf("Введите символ: ");

	scanf("%c", &c);

	switch (c)

	{
	case 'a':
	case 'b':
	case 'c':
	case 'd':
		printf("Это буква");

		break;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
		printf("Это цифра");

		break;
	default:
		printf("Ошибка");
	}
	return 0;

}
*/

//7.2 КАЛЬКУЛЯТОР 
/*
{
	setlocale(LC_ALL, "RUS");
	char c;
	float x, y;
	printf("Введите выражение: ");
	scanf("%f %c %f", &x, &c, &y);
	switch (c)
	{
	case '+':
		printf("Сумма чисел = %.0lf", x+y);
		break;
	case '/':
		printf("Деление чисел = %.0lf", x/y);
		break;
	case '*':
		printf("Произведение чисел = %.0lf", x*y);
		break;
	case '-':
		printf("Вычитание чисел чисел = %.0lf", x-y);
		break;
	}
}
*/

//10.1 ДВЕ ФУНКЦИИ 
//ЗНАЧЕНИЕ -2,1
/*
double fa(double x);
double fb(double x);
void main()
{
	setlocale(LC_ALL, "RUS");
	double x;
	printf("Введите x: ");
	scanf("%lf", &x);
	printf("fa(x)=%.1lf\nfb(x)=%.1lf \n", fa(x), fb(x));
	printf("Произведение %.1lf\nРазность %.2lf\nУдвоенная сумма %.2lf\n", fa(x) * fb(x), fa(x) * fa(x) - fb(x) * fb(x), (fa(x) + fb(x)) * 2);
}

double fa(double x) {

	double y;
	if (x <= 3)
	{
		y = pow(x, 2) - 3 * x + 9;
	}
	else
	{
		y = 1 / (pow(x, 3) + 3);
	}
	return y;

}

double fb(double x)
{
	double y;
	y = x * exp(sin(pow(x, 2)));
	return y;
}
*/

//8.2 ТАБУЛЯЦИЯ
/*
void main()

{
	setlocale(LC_ALL, "RUS");

	double y, s;

	printf("Табулирование функции y = x^3 - 4x^2 + 2\n");
	printf("Введите шаг табуляции ");
	scanf("%lf", &s);
	printf("  _____________________\n");
	printf(" |     x    |     y    |\n");
	printf(" |---------------------|\n");
	for (double x = 1; x < 3; x += s)
	{
		y = pow(x, 3) - 4 * pow(x, 2) + 2;
		printf(" |%+lf |%lf |\n", x, y);
	}
	printf(" |_____________________|\n");

}
*/

// ДЗ 8 РАБОТА ВЫЧИСЛЕНИЕ ФАКТОРИАЛА
/*
void main()

{
	setlocale(LC_ALL, "RUS");

	double N, n, f=1;
	printf("Введите число факториала: ");
	scanf("%lf", &N);
	for (double n = 1; n <= N; n++)
	{
		f = f * n;
	}
	printf("Факториал равен %.0lf\n", f);
}
*/

//ЗАДАНИЕ 9.1
/*
#define ROW 9
#define COL 9
void main()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; row++)
	{
		for (col = 1; col <= COL; col++)
			printf("%5d", col * row);
			printf("\n");
	}
	system("pause");
}
*/


void main()

{
	printf(" _ _ _ _ _ _ _ _ _\n");
	printf("|_|_|_|_|_|_|_|_|_|1\n");
	printf("|_|_|_|_|_|_|_|_|_|6\n");
	printf("|_|_|_|_|_|_|_|_|_|1\n");
	printf("|_|_|_|_|_|_|_|_|_|4\n");
	printf("|_|_|_|_|_|_|_|_|_| 3\n");
	printf("|_|_|_|_|_|_|_|_|_| 4\n");
	printf("|_|_|_|_|_|_|_|_|_| 3\n");
	printf("|_|_|_|_|_|_|_|_|_| 4\n");
	printf("|_|_|_|_|_|_|_|_|_| 7\n");
	printf(" 6 4 4 3 3 7 1 4 1   ");
}
