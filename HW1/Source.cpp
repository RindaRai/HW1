#include<stdio.h>
#include<locale.h>
#include<iostream>

void task1()
{
	setlocale(LC_ALL, "");
	int h, m, s, f;

	printf("������� ���������� �����: ");
	scanf_s("%d", &h);

	printf("������� ���������� �����: ");
	scanf_s("%d", &m);

	printf("������� ���������� ������: ");
	scanf_s("%d", &s);

	f = 3600 * h + 60 * m + s;

	if (h >= 0 && h <= 24 && m <= 60 && m >= 0 && s <= 60 && s >= 0)
	{
		printf("������ %d ������\n", f);
	}
	else
	{
		printf("�� ����� ������������ ��������\n");
	}
	system("pause");
}

void task2()
{

	setlocale(LC_ALL, "");
	int m, d, f;

	printf("������� ����� ������: ");
	scanf_s("%d", &m);

	printf("������� ����� ���: ");
	scanf_s("%d", &d);

	f = 30 * (m - 1) + d;

	if (m >= 1 && m <= 12 && d <= 30 && d >= 1)
	{
		printf("������ %d ����\n", f);
	}
	else
	{
		printf("�� ����� ������������ ��������\n");
	}

	system("pause");
}

void task3()
{

	setlocale(LC_ALL, "");
	int m, d, f;

	printf("������� ����� ������: ");
	scanf_s("%d", &m);

	printf("������� ����� ���: ");
	scanf_s("%d", &d);

	f = 30 * (m - 1) + d;

	if (m >= 1 && m <= 12 && d <= 31 && d >= 1)
	{
		if (m == 3)
		{
			f = f - 1;
		}

		else if (m == 2 || m == 6 || m == 7)
		{
			f = f + 1;
		}

		else if (m == 8)
		{
			f = f + 2;
		}

		else if (m == 8)
		{
			f = f + 2;
		}

		else if (m == 9 || m == 10)
		{
			f = f + 3;
		}

		else if (m == 11 || m == 12)
		{
			f = f + 4;
		}

		printf("������ %d ����\n", f);
	}
	else
	{
		printf("�� ����� ������������ ��������\n");
	}

	system("pause");
}

void task4()
{
	setlocale(LC_ALL, "");
	int m1, m0, N;

	printf("������� ���������� ����� N: ");
	scanf_s("%d", &N);

	m1 = N % 10;
	m0 = N / 10;

	if (N > 9 && N < 100)
	{
		printf("������ �����    = %d\n", m0);
		printf("��������� ����� = %d\n", m1);
	}
	else
	{
		printf("�� ����� ������������ �������� N\n");
	}

	system("pause");
}


void task5()
{
	setlocale(LC_ALL, "");
	int m1, m2, m3, f;

	printf("������� ����� m1: ");
	scanf_s("%d", &m1);

	printf("������� ����� m2: ");
	scanf_s("%d", &m2);

	printf("������� ����� m3: ");
	scanf_s("%d", &m3);

	if ((m1 < m2 && m2 <= m3) || (m1 < m3 && m3 <= m2))
	{
		f = m1;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((m2 < m1 && m1 <= m3) || (m2 < m3 && m3 <= m1))
	{
		f = m2;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else if ((m3 < m1 && m1 <= m2) || (m3 < m2 && m2 <= m1))
	{
		f = m3;
		printf("���������� ����� �� ���� = %d\n", f);
	}

	else
	{
		printf("����� ��������� ���������� �����\n");
	}
	system("pause");
}

void task6()
{
	setlocale(LC_ALL, "");
	int m, n;

	printf("������� ����� m: ");
	scanf_s("%d", &m);

	printf("������� n: ");
	scanf_s("%d", &n);

	if (n % m == 0)
	{
		printf("����� n ������ m\n");
	}

	else
	{
		printf("����� n �� ������ m\n");
	}

	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("������� ����� �������: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();

		break;
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	}

	printf("������ ���������� 1 ��� 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}