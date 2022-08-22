#include "Sort2D.h"
#include "constants.h"
template <typename T>
void Sort2D (T arr[ROWS][COLS], const int ROWS, const int COLS)
{
for (int i = 0; i < (ROWS * COLS); i++)
{
	for (int j = i + 1; j < ROWS * COLS; j++)
	{
		if (arr[0][j] > arr[0][i])
		{
			T buffer = arr[0][i];
			arr[0][i] = arr[0][j];
			arr[0][j] = buffer;
		}
	}
}
}