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
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

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

void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS);

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
	double arr_2D_double[ROWS][COLS];
	FillRand(arr_2D_sample, ROWS, COLS);
	Print(arr_2D_sample, ROWS, COLS);
	cout << delimiter;
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
	cout << delimiter;
	FillRand(arr_2D_char, ROWS, COLS);
	Print(arr_2D_char, ROWS, COLS);
	cout << delimiter;
	FillRand(arr_2D_double, ROWS, COLS);
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter; 
	Sum(arr_2D_sample, ROWS, COLS);
	cout << "Сумма элементов 2D массива дробных чисел: " << Sum(arr_2D_double, ROWS, COLS) << endl;
	cout << "Среднее арифметич. элементов 2D массива дробных чисел: " << Avg(arr_2D_double, ROWS, COLS) << endl;
	cout << "Минимальное значение элементов 2D массива дробных чисел: " << minValueIn(arr_2D_double, ROWS, COLS) << endl;
	cout << "Максимальное значение элементов 2D массива дробных чисел: " << maxValueIn(arr_2D_double, ROWS, COLS) << endl;
	ShiftRight(arr_2D_double, ROWS, COLS);
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter;
	ShiftLeft(arr_2D_double, ROWS, COLS);
	Print(arr_2D_double, ROWS, COLS);
	cout << delimiter; 
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
			arr[i][j] =char (rand()%256); 
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
	return (double) Sum (arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double avg = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			avg = (double) Sum (arr, ROWS, COLS) / (ROWS * COLS);
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
		arr[ROWS-1][COLS-1] = buffer;
	}
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int s = 0; s < shift_right; s++)
	{
		int buffer = arr[ROWS - 1][COLS - 1]; 
		for (int i = ROWS-1; i>=0; i--)
		{
			for (int j = COLS-1; j>=0; j--)
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