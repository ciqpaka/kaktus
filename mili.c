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
	puts("������� ��������");
	scanf("%d", &mil);
	res = M * mil;
	printf("%d ������� ���� - ��� %.3f ��\n", mil, res);
	res = S * mil;
	printf("%d ���������� ���� - ��� %.3f ��\n", mil, res);
	res = R * mil;
	printf("%d ������ ���� - ��� %.f ��\n", mil, res);
	res = C * mil;
	printf("%d ������������ ���� - ��� %.3f ��\n", mil, res);
	res = G * mil;
	printf("%d �������������� ���� - ��� %.1f ��", mil, res);


}