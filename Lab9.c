#define _CRT_SECURE_NO_DEPRECATE
#define ROW 9
#define COL 9
#define PI 3.14
#include <stdio.h>
#include <locale.h>
#include <math.h>
void zd1();
void zd2();
void zd3();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	zd1();
	zd2();
	zd3();
	return 0;
}

void zd1()
{
	printf("Задание 1\n");
	//измененная программа, вводится левый нижний треугольник таблицы Пифагора
	int row, col;//row-строка, col-столбец 
	printf("\n");
	for (row = 1;row <= ROW;++row)
	{
		for (col = 1;col <= row;col++)
		{
			printf("%5d", col * row);
		}
		printf("\n");
	}

	printf("\nВариант 8\n");
	for (int x = 1;x <= 5;x++)//x- строки 
	{
		for (int y = 1;y <= x;y++)//y-столбцы
		{
			printf("%d ", x * 10);
		}
		printf("\n");
	}
}



void zd2()
{
	printf("Задание 2\n");

    char answer;//для ответа да/нет
	do
	{
		int n;
		int a;//число, отсоединенное от основного
		int schetchik = 0;//для подсчета чисел 3
		int answer;

		printf("\nВведите произвольное длинное число: ");
		scanf("%d", &n);

		while (n > 0)
		{
			a = n % 10;
			if (a == 3)
			{
				schetchik++;
			}
			n = n / 10;//убрали последнюю цифру 
		}
		printf("Количество троек в данном числе: %d\n", schetchik);

		printf("Продолжить? (Да - 1, Нет - 0): ");
		getchar(); //убираем Enter после ввода y чтобы не произошла ошибка 
		scanf(" %d", &answer);
	} while (answer != '0');
}


void zd3()
{
	printf("Задание 3\n");

	char symbol;//символ, которым рисуем
	double a;//угол а
	int b;//сторона основания 
	int height;//высота треугольника
	int c,d;//строки и столбцы
	char answer;

	do
	{
		printf("\nВведите символ для рисования: ");
		scanf("&c", &symbol);

		printf("\nВведите угол a(в градусах): ");
		scanf("%lf", &a);

		printf("Введите сторону b: ");
		scanf("%d", &b);

		height = (int)(b * tan(PI * a / 180.0));

		if (height <= 0) height = 1;

		for (c = 1;c <= height;c++)
		{
			for (d = 1; d <= c;d++)//зависит от номера строки
			{
				printf("%c", symbol);
			}
			printf("\n");
		}
		printf("Продолжить? (Да - введите любое число, нет - введите 0): ");
		scanf("%с", &answer);

	} while (answer != '0');
}