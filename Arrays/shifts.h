#pragma once
#include "constants.h"
template <typename T> void ShiftLeft(T arr[], const int n, int number_of_shifts);
template <typename T> void ShiftRight(T arr[], const int n, int number_of_shifts);
template <typename T> void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
template <typename T> void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);