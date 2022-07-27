#include "constants.h"
template <typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T> T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <typename T> double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T> double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T> T minValueIn(T arr[], const int n)
{
	T minvalue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < minvalue) minvalue = arr[i];
	}
	return minvalue;
}
template <typename T> T maxValueIn(T arr[], const int n)
{
	T maxvalue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxvalue) maxvalue = arr[i];
	}
	return maxvalue;
}
template <typename T> T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T minValue = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < minValue) minValue = arr[i][j];
		}
	}
	return minValue;
}
template <typename T> T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
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