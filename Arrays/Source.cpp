//Arrays
#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "-----------------------------------------------\n"
const int ROWS = 3;
const int COLS = 4;
int shift_left;
int shift_right;

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftLeft(int arr[], const int n);
void ShiftRight(int arr[], const int n);
void ShiftLeft(double arr[], const int n);
void ShiftRight(double arr[], const int n);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите значение сдвига влево: "; cin >> shift_left;
	cout << "Введите значение сдвига вправо: "; cin >> shift_right;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "Исходный одномерный массив целых чисел: " << endl;
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее элементов массива: " << Avg(arr, n) << endl;
	Sort(arr, n);
	cout << "Одномерный массив целых чисел после сортировки: " << endl;
	Print(arr, n);
	ShiftLeft(arr, n);
	cout << "Одномерный массив после сдвига влево: " << endl;
	Print(arr, n);
	ShiftRight(arr, n);
	cout << "Одномерный массив после сдвига вправо: " << endl;
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];
	char arr_sample_char[SIZE];
	FillRand(brr, SIZE);
	cout << "Исходный одномерный массив дробных чисел: " << endl;
	Print(brr, SIZE);
	Sort(brr, SIZE);
	cout << "Одномерный массив дробных чисел после сортировки: " << endl;
	Print(brr, SIZE);
	cout << "Сумма элементов дробного одномерного массива массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое дробного одномерного массива: " << Avg(brr, SIZE) << endl;
	ShiftLeft(brr, SIZE);
	cout << "Одномерный массив дробных чисел после сдвига влево: " << endl;
	Print(brr, SIZE);
	ShiftRight(brr, SIZE);
	cout << "Одномерный массив дробных чисел после сдвига вправо: " << endl;
	Print(brr, SIZE);
	cout << delimiter;
	FillRand(arr_sample_char, SIZE);
	cout << "Одномерный массив символов: " << endl;
	Print(arr_sample_char, SIZE);
	Sort(arr_sample_char, SIZE);
	cout << "Одномерный массив символов после сортировки: " << endl;
	Print(arr_sample_char, SIZE);
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
	ShiftLeft(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS);
	ShiftRight(arr_2D_sample, ROWS, COLS);
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
	ShiftRight(arr_2D_double, ROWS, COLS);
	cout << "Сдвиг вправо 2D массива дробных чисел: " << endl;
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	ShiftLeft(arr_2D_double, ROWS, COLS);
	cout << "Сдвиг влево 2D массива дробных чисел: " << endl;
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	FillRand(arr_2D_char, ROWS, COLS);
	cout << "Произвольный двумерный массив символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	ShiftLeft(arr_2D_char, ROWS, COLS);
	cout << "Сдвиг влево 2D массива символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	ShiftRight(arr_2D_char, ROWS, COLS);
	cout << "Сдвиг вправо 2D массива символов: " << endl;
	Print(arr_2D_char, ROWS, COLS);
}

void FillRand(int arr[], const int n)//код заполнения массива случ числами
{
	for (int i = 0; i < n; i++) arr[i] = rand() % 100;
}
void FillRand(double arr[], const int n)//код заполнения массива случ числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 1000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 256);
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = char(rand() % 256);
		}
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << int(arr[i]) << tab;
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (int(arr[j]) < int(arr[i]))
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			avg = (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
		}
	}
	return avg;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue) minValue = arr[i][j];
		}
	}
	return minValue;
}
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue) maxValue = arr[i][j];
		}
	}
	return maxValue;
}
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue) minValue = arr[i][j];
		}
	}
	return minValue;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double maxValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxValue) maxValue = arr[i][j];
		}
	}
	return maxValue;
}

void ShiftLeft(int arr[], const int n)
{
	for (int k = 0; k < shift_left; k++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n)
{
	for (int k = 0; k < shift_right; k++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftLeft(double arr[], const int SIZE)
{
	for (int k = 0; k < shift_left; k++)
	{
		double buffer = arr[0];
		for (int i = 0; i < SIZE; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[SIZE - 1] = buffer;
	}
}
void ShiftRight(double arr[], const int SIZE)
{
	for (int k = 0; k < shift_right; k++)
	{
		double buffer = arr[SIZE - 1];
		for (int i = SIZE - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
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
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_left; k++)
	{
		double buffer = arr[0][0];
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
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_right; k++)
	{
		double buffer = arr[ROWS - 1][COLS - 1];
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
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_left; k++)
	{
		char buffer = arr[0][0];
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
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_right; k++)
	{
		char buffer = arr[ROWS - 1][COLS - 1];
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