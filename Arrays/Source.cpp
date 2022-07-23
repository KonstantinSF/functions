//Arrays
#include "stdafx.h"
#include "Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistic.h"
#include"Shifts.h"

int shift_left;
int shift_right;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее элементов массива: " << Avg(arr, n) << endl;

	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	int arr_2D_sample[ROWS][COLS];
	char arr_2D_char[ROWS][COLS];
	FillRand(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS);
	Sum(arr_2D_sample, ROWS, COLS);
	cout << "Сумма элементов 2D массива: " << Sum(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Среднее арифм. элементов 2D массива: " << Avg(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Минимальное значение в 2D массиве: " << minValueIn(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Максимальное значение в 2D массиве: " << maxValueIn(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Введите значение сдвига влево: "; cin >> shift_left;
	ShiftLeft(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS); 
	cout << "Введите значение сдвига вправо: "; cin >> shift_right;
	ShiftRight(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS);
	FillRand(arr_2D_char, ROWS, COLS);
	Print(arr_2D_char, ROWS, COLS);
}

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_left; k++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int s = 0; s < shift_right; s++)
	{
		int buffer = arr[ROWS - 1][COLS - 1];
		for (int i = ROWS - 1; i >= 0; i--)
		{
			for (int j = COLS - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = buffer;
	}
}