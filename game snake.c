#include <stdio.h>
#include <locale.h>
#define SIZE 9

void meny()
{
    printf("\n����\n");
    printf("1)������ � ���� ���������� ����\n2)������� ����\n3)����� �� ����\n");
    printf("������� ����� �������� ��������� � ����, ����� ������� ��������:");
}

char pole(char A[SIZE][SIZE], char stroka[], char stolb[])
{
    printf("����������� Snake\n");
    printf(" _________________\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("|");
        for (int j = 0; j < SIZE; j++)
        {
            if (A[i][j] == '4')
            {
                printf("%c|", 4);
            }
            else
            {
                printf("_|");
            }

        }
        printf("%c", stroka[i]);
        printf("\n");
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %c", stolb[i]);
    }
}

void main()
{
    setlocale(LC_ALL, "RUS");
    int d, q = 0;
    while (q < 1)
    {
        meny();
        scanf("%d", &d);

        char A[SIZE][SIZE] =
        {
        {'4','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','4'},
        };

        char stroka[9] = { '1', '6', '1', '4', '3', '4', '3', '4', '7' };
        char stolb[9] = { '6', '4', '4', '3', '3', '7', '1', '4', '1' };

        char B[SIZE][SIZE] =
        {
        {'4','0','0','0','0','0','0','0','0'},
        {'4','4','4','4','4','4','0','0','0'},
        {'0','0','0','0','0','4','0','0','0'},
        {'0','0','4','4','4','4','0','0','0'},
        {'4','4','4','0','0','0','0','0','0'},
        {'4','0','0','0','0','4','4','4','0'},
        {'4','0','0','0','0','4','0','4','0'},
        {'4','4','0','0','0','4','0','4','0'},
        {'0','4','4','4','4','4','0','4','4'},
        };

        char D[SIZE][SIZE] =
        {
        {'4','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','0'},
        {'0','0','0','0','0','0','0','0','4'},
        };

        switch (d)
        {
        case (1):
            pole(A, stroka, stolb);

            int k = 0, n = 0;
            for (int c = 0; c < 1000; c++)
            {
                printf("\n������� ���������� ������\n");
                int x, y;
                scanf("%d %d", &x, &y);
                D[x][y] = '4';
                if (D[x][y] != A[x][y] && D[x][y] == B[x][y])
                {
                    A[x][y] = '4';

                    pole(A, stroka, stolb);

                    k = k + 1;
                    if (k == 31)
                    {
                        printf("\n�����������!!!\n�� ������ �����������.\n");
                        break;
                    }
                }
                else if (A[x][y] == D[x][y])
                {
                    printf("���������� ������� ��������, ���������� ��� ���");
                }
                else
                {
                    printf("������� �������� ����������\n");
                    n = n + 1;
                    printf("���������� ������ %d �� 6\n", n);
                    if (n == 6)
                    {
                        printf("���������.\n���������� ��� ���\n");
                        break;
                    }
                }
            }
            break;
        case 2:
        {
            printf("\n�������\n���� (�Snake�) - ������������� ���������� �����������.\n������� ������������ ����� ������������� ��� ���������� �����, ������ ������� ������� ��������� � �������� ����� �����.\n���������� ��������� ������ ������ ��������� ������ ����� �������, ����� ��� ���������� ����������� ����� ����� �������.\n������ �� ����� �������� ���� ����, ���� �� ���������.\n����� �� ����� ����� ����������, ������� ������ ������ ��������� � ��������������� ���� � ������� �����.\n");
            break;
        }
        case 3:
        {
            return 1;
        }
        default:
        {
            printf("\n������ �������� ��� � ����\n");
        }
        }
    }
}