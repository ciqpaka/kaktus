#include <locale.h>

#include <stdio.h>

void main()

{
	setlocale(LC_ALL, "RUS");
	int x, k, r;
	puts("¬ведите число копеек");
	scanf("%d", &x);
	k = x % 100;
	r = x / 100;
	
	if ((r == 1 || r == 21 || r == 31 || r == 41 || r == 51 || r == 61 || r == 71 || r == 81 || r == 91))
	{
		printf("%d рубль и ", r);
	}
	else if (r > 1 && r < 5 || r > 21 && r < 25 || r > 31 && r < 35 || r > 41 && r < 45 || r > 51 && r < 55 || r > 61 && r < 65 || r > 71 && r < 75 || r > 81 && r < 85 || r > 91 && r < 95)
	{
		printf("%d рубл€ и ", r);
	}
	else
	{
		printf("%d рублей и ", r);
	}

	if (k == 1 ||  k == 21 || k==31 || k==41 || k==51 || k==61 || k==71 || k ==81 || k==91)
	{
		printf("%d копейка", k);
	}
	
	else if (k > 1 && k < 5 || k > 21 && k <25 || k > 31 && k < 35 || k > 41 && k < 45 || k > 51 && k < 55 || k > 61 && k < 65 || k > 71 && k < 75 || k > 81 && k <85 || k > 91 && k < 95)
	{
		printf("%d копейки", k);
	}

	else
	{
		printf("%d копеек", k);
	}

}