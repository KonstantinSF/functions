#include "UniqueRand2Dvar2.h"
#include "stdafx.h"
template <typename T>
void UniqueRand2Dv2(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < (ROWS * COLS); i++)
	{
		arr[0][i] = rand() % (ROWS * COLS);
		for (int j = 0; j < i; j++)
		{
			if (arr[0][i] == arr[0][j])
			{
				i--;
				break;
			}
		}
	}
}