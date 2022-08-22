//Arrays
#include "stdafx.h"
#include"constants.h"
#include"fillrand.h"
#include"print.h"
#include"statistics.h"
#include"sort.h"
#include"statistics.h"
#include"shifts.h"
#include "UniqueRand2D.h"

#include "Print.cpp"
#include"Sort.cpp"
#include "Shifts.cpp"
#include "Statistics.cpp"
#include "UniqueRand2D.cpp"


void main()
{
	int number_of_shifts;
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение сдвига: "; cin >> number_of_shifts;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "Исходный одномерный массив целых чисел: " << endl;
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в одномерном массиве целых чисел: " << minValueIn(arr, n) << endl; 
	cout << "Максимальное значение в одномерном массиве целых чисел: " << maxValueIn(arr, n) << endl; 
	Sort(arr, n);
	cout << "Одномерный массив целых чисел после сортировки: " << endl;
	Print(arr, n);
	ShiftLeft(arr, n, number_of_shifts);
	cout << "Одномерный массив после сдвига влево: " << endl;
	Print(arr, n);
	ShiftRight(arr, n, number_of_shifts);
	cout << "Одномерный массив после сдвига вправо: " << endl;
	Print(arr, n);

	double brr[n];
	char arr_sample_char[n];
	FillRand(brr, n);
	cout << "Исходный одномерный массив дробных чисел: " << endl;
	Print(brr, n);
	Sort(brr, n);
	cout << "Одномерный массив дробных чисел после сортировки: " << endl;
	Print(brr, n);
	cout << "Сумма элементов дробного одномерного массива : " << Sum(brr, n) << endl;
	cout << "Среднее-арифметическое дробного одномерного массива: " << Avg(brr, n) << endl;
	cout << "Минимальное значение в одномерном массиве дробных чисел: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение в одномерном массиве дробных чисел: " << maxValueIn(brr, n) << endl;
	ShiftLeft(brr, n, number_of_shifts);
	cout << "Одномерный массив дробных чисел после сдвига влево: " << endl;
	Print(brr, n);
	ShiftRight(brr, n, number_of_shifts);
	cout << "Одномерный массив дробных чисел после сдвига вправо: " << endl;
	Print(brr, n);
	cout << delimiter;
	FillRand(arr_sample_char, n);
	cout << "Одномерный массив символов: " << endl;
	Print(arr_sample_char, n);
	Sort(arr_sample_char, n);
	cout << "Одномерный массив символов после сортировки: " << endl;
	Print(arr_sample_char, n);
	ShiftLeft(arr_sample_char, n, number_of_shifts);
	cout << "Одномерный массив символов после сдвига влево: " << endl;
	Print(arr_sample_char, n);
	ShiftRight(arr_sample_char, n, number_of_shifts);
	cout << "Одномерный массив символов после сдвига вправо: " << endl;
	Print(arr_sample_char, n);
	cout << delimiter;
	int arr_2D_sample[ROWS][COLS];
	char arr_2D_char[ROWS][COLS];
	double arr_2D_double[ROWS][COLS];
	FillRand(arr_2D_sample, ROWS, COLS);
	cout << "Исхоный двумерный массив целых чисел: " << endl;
	Print(arr_2D_sample, ROWS, COLS);
	cout << delimiter;
	cout << "Сумма элементов 2D массива: " << Sum(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Среднее арифм. элементов 2D массива: " << Avg(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Минимальное значение в 2D массиве: " << minValueIn(arr_2D_sample, ROWS, COLS) << endl;
	cout << "Максимальное значение в 2D массиве: " << maxValueIn(arr_2D_sample, ROWS, COLS) << endl;
	ShiftLeft(arr_2D_sample, ROWS, COLS, number_of_shifts);
	cout << "Двумерный массив после сдвига Влево: " << endl;
	Print(arr_2D_sample, ROWS, COLS);
	ShiftRight(arr_2D_sample, ROWS, COLS, number_of_shifts);
	cout << "Двумерный массив просле сдвига Вправо: " << endl;
	Print(arr_2D_sample, ROWS, COLS);
	cout << delimiter;
	FillRand(arr_2D_double, ROWS, COLS);
	cout << "Исходный двумерный массив дробных чисел: " << endl;
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	Sum(arr_2D_sample, ROWS, COLS);
	cout << "Сумма элементов 2D массива дробных чисел: " << Sum(arr_2D_double, ROWS, COLS) << endl;
	cout << "Среднее арифметич. элементов 2D массива дробных чисел: " << Avg(arr_2D_double, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов 2D массива дробных чисел: " << minValueIn(arr_2D_double, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов 2D массива дробных чисел: " << maxValueIn(arr_2D_double, ROWS, COLS) << endl;
	ShiftRight(arr_2D_double, ROWS, COLS, number_of_shifts);
	cout << "Сдвиг вправо 2D массива дробных чисел: " << endl;
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	ShiftLeft(arr_2D_double, ROWS, COLS, number_of_shifts);
	cout << "Сдвиг влево 2D массива дробных чисел: " << endl;
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	FillRand(arr_2D_char, ROWS, COLS);
	cout << "Произвольный двумерный массив символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	ShiftLeft(arr_2D_char, ROWS, COLS, number_of_shifts);
	cout << "Сдвиг влево 2D массива символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	ShiftRight(arr_2D_char, ROWS, COLS, number_of_shifts);
	cout << "Сдвиг вправо 2D массива символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	UniqRandom(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS);
}