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

    printf("\n����� ����������\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("a[%d]=%.1f\n", i + 1, A[i]);
    }

    printf("\n��������� ����� ������\n");
    for (int i = 0; i < SIZE; i++)
    {
        if (temp > 0)
            printf("a[%d]=%.1f\n", i + 1, a[i] = A[i] * -1);
        else
            printf("a[%d]=%.1f\n", i + 1, a[i] = A[i] * -1);
    
    }

    printf("\n�������\n");
    printf(" ________________________________________\n");
    printf("|������ |�������� ��������|����� ��������|\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("|�%d\t|%.1f\t\t  |%.1f\t\t |\n", i + 1, A[i], a[i]);
    }
    printf("-----------------------------------------\n");
    printf("������� �������������� = %1.f", x / SIZE);
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
    printf("���������� ��������������� ������� ���������:\n1)�������� ������ 10\n2)��������� �� �������� ��������\n �����:%.0f", k);
}
*/