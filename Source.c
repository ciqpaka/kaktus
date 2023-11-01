#include <stdio.h> 
#include <locale.h> 
#define SIZE 10 

/*
void main()

{
    setlocale(LC_CTYPE, "RUS");
    float A[SIZE], temp, a[SIZE], x=0;
    for (int i = 0; i < SIZE; i++)

    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
        x = x + temp;
    }

    printf("\nВывод результата\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("a[%d]=%.1f\n", i + 1, A[i]);
    }

    printf("\nРезультат смены знаков\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (temp > 0)
            printf("a[%d]=%.1f\n", i + 1, a[i] = A[i] * -1);
        else
            printf("a[%d]=%.1f\n", i + 1, a[i] = A[i] * -1);
    
    }

    printf("\nТаблица\n");
    printf(" ________________________________________\n");
    printf("|индекс |исходное значение|новое значение|\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("|№%d\t|%.1f\t\t  |%.1f\t\t |\n", i + 1, A[i], a[i]);
    }
    printf("-----------------------------------------\n");
    printf("Среднее арифметическое = %1.f", x / SIZE);
}
*/

/*
void main()

{
    setlocale(LC_CTYPE, "RUS");
    float A[SIZE], temp, k = 0;
    for (int i = 0; i < SIZE; i++)

    {
        printf("a[%d] = ", i + 1);
        scanf("%f", &temp);
        A[i] = temp;
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (i % 2 != 0 && A[i] > 10)
        {
            k = k + 1;
        }
    }
    printf("Количество удовлетворяющих условию элементов:\n1)Значение больше 10\n2)Находятся на нечётных позициях\n Равно:%.0f", k);
}
*/