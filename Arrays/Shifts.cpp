#include "shifts.h"

template <typename T> void ShiftLeft(T arr[], const int n)
{
	for (int k = 0; k < shift_left; k++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T> void ShiftRight(T arr[], const int n)
{
	for (int k = 0; k < shift_right; k++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

template <typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int k = 1; k <= shift_left; k++)
	{
		T buffer = arr[0][0];
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
template <typename T> void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int s = 0; s < shift_right; s++)
	{
		T buffer = arr[ROWS - 1][COLS - 1];
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