﻿#pragma warning (disable:4326)
#include<iostream>
using namespace std;

int Add(int a, int b);	//Прототип функции (Объявление функции - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);
int Factorial(int a);
double Power(float a, int b);

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);//Использование функции (Вызов функции - Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	cout << a << "!="				 << Factorial(a) << endl;
	cout << a << " в степени "<< b << "=" << Power(a,b) << endl;
}

int Add(int a, int b)//Реализация функции (Определение функции - Function definition)
{
	//Addition - Сложение
	int c = a + b;
	return c;
}
int Sub(int a, int b)
{
	//Subtraction - Вычитание
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - Умножение
	return a * b;
}
double Div(int a, int b)
{
	//Division - Деление
	return (double)a / b;
}
int Factorial(int a)
{
	int c = 1;
	for (int i = 1; i <= a; i++) c *=i;
	return c;
}
double Power(float a, int b)
{
	float c=1;
	
	if (b < 0)
	{
		a = 1 / a;
		b = -b;
	}
		for (int i = 0; i < b; i++) c *= a;
	return c;
}